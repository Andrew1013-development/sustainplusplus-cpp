#include "GodDrinksCPP_src.hpp"
#include "extraLarge_src.hpp"
#include <iostream>
#include <vector>
#include <tuple>
#include <string>
#include <algorithm>
using namespace std;

namespace extraLarge {    
    // forward declaration
    Object object1,object2;
    
    //
    // class Object functions
    //
    void Object::setObjects(string name, string attribute_name, unsigned int attribute_rating) {
        object_name = name;
        object_attribute.push_back(make_tuple(attribute_name, attribute_rating)); 
    }

    tuple<string, unsigned int> Object::getAttribute(string attribute_name) {
        vector<tuple<string, unsigned int>>::iterator search_iter;
        for (search_iter = object_attribute.begin(); search_iter != object_attribute.end(); search_iter++) {
            if (get<0>(*search_iter) == attribute_name) {
                return *search_iter;
                break;
            }
        }
    }

    vector<string> Object::getArtTags() {
        return object_art_tags;
    }
    
    vector<tuple<string, unsigned int>> Object::getAttributes() {
        return object_attribute;
    }

    void Object::setArtTags(string art_tag) {
        object_art_tags.push_back(art_tag);
    }
    
    //
    // class Life functions
    //
    void Life::Ghost() {};

    void Life::addPhysicalAttribute(string physical_attribute) {
        life_physical_attributes.push_back(physical_attribute);
    }

    //
    //  class Rule functions
    //
    void Rule::setRule(string name, bool enforcement) {
        rule_name = name;
        rule_enforcement = enforcement;
    }

    //
    // extended classes functions
    //

    // general + global functions
    bool sortObject(Object object1, Object object2) {
        string attribute = "beauty";
        // return bool on whether or not one object's attribute rating is higher than the other
        return (get<1>(object1.getAttribute(attribute)) > get<1>(object2.getAttribute(attribute)));
    }

    vector<Object> sortByAttribute(vector<Object> object_vec, string attribute) {
        vector<Object> object_vec_2;
        // selective filtering with matching attribute name
        for (int i = 0; i < object_vec.size(); i++) {
            tuple<string, unsigned int> attribute_packet = object_vec.at(i).getAttribute(attribute);
            if (get<0>(attribute_packet) == attribute) {
                object_vec_2.push_back(object_vec.at(i));
            }
        }
        // sort if sortObject == true
        sort(object_vec_2.begin(),object_vec_2.end(),sortObject);
        return object_vec_2;
    }

    int getIndexOf(Object object, string art_tag) {
        bool found = false;
        vector<string> obj_art = object.getArtTags();
        vector<string>::iterator search_iter, delete_ptr;
        for (search_iter = obj_art.begin(); search_iter != obj_art.end(); search_iter++) {
            if (*search_iter == art_tag) {
                found = true;
                break;
            }
        }

        if (found) {
            return 0;
        } else {
            return -1;
        }
    }
}