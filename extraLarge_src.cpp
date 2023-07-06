#include <iostream>
#include <sstream>
#include <format>
#include <vector>
#include <tuple>
#include <map>
#include <string>
#include <cstring>
#include <algorithm>
#include "GodDrinksCPP_src.hpp"
#include "extraLarge_src.hpp"
using namespace std;

namespace extraLarge {    
    // forward declaration
    Object object1,object2;
    Life life1, life2;
    
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

    vector<tuple<string, string>> Life::getFetishes() {
        return life_fetishes;
    } 

    void Life::addMemory(Life memory) {
        life_memories.push_back(memory);
    }

    Life Life::getMemory(Life memory) {
        vector<Life>::iterator search_iter;
        for (search_iter = life_memories.begin(); search_iter != life_memories.end(); search_iter++) {
            if (compare_lives(&*search_iter,&memory)) {
                return *search_iter;
                break;
            }
        }
    }

    void Life::setNickname(Life target, string nickname) {
        tuple<Life, string> nickname_packet = make_tuple(target,nickname);
        life_nicknames.push_back(nickname_packet);
    }

    string Life::codeMessage(string message, string codec) {
        string encoded_message = "";
        stringstream strstream;
        if (codec == "mux") {   
            for (int i = 0; i < message.size(); i++) {
                char* string_to_char = &message.at(i);
                strstream << format("{:03}",stoi(string_to_char)); //std::format for leading 0's 
            }
            strstream >> encoded_message;
        } else {
            encoded_message = message;
        }
        return encoded_message;
    }

    string Life::decodeMessage(string message, string codec) {
        string decoded_message = "";
        if (codec == "mux") {
            for (int i = 0; i < message.size(); i+=3) {
                const char* current = message.substr(i,3).c_str(); // convert to c strings because stoi()
                int decoded_char = stoi(current);
                decoded_message += to_string(static_cast<char>(decoded_char)); //static_cast<char> to convert int -> char
            }
        } else {
            decoded_message = message;
        }
        return decoded_message;
    }

    void Life::announce(string announcement) {
        cout << life_name << " has announced the following: " << announcement << endl; 
    }

    queue<string> Life::getThoughts() {
        return life_thoughts;
    }

    string Life::getThought() {
        return life_thoughts.front();
    } 

    void Life::sayTo(string message, Life target) {
        cout << life_name << " has told to " << target.getName() << " the following: " << message << endl;
    }

    void Life::clearThoughts() {
        while (!life_thoughts.empty()) {
            life_thoughts.pop();
        }
    }

    // support functions
    string Life::getName() {
        return life_name;
    }

    //
    //  class Rule functions
    //
    void Rule::setRule(string name, bool enforcement) {
        rule_name = name;
        rule_enforcement = enforcement;
    }

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

    int searchByType(vector<tuple<string, string>> fetish_vec, string fetish_name, string fetish_property) {
        bool found = false;
        tuple<string, string> fetish_search_packet = make_tuple(fetish_name, fetish_property);
        vector<tuple<string, string>>::iterator search_iter;
        for (search_iter = fetish_vec.begin(); search_iter != fetish_vec.end(); search_iter++) {
            if (*search_iter == fetish_search_packet) {
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

    bool compare_lives(Life* life1, Life* life2) {
        if (life1->getName() == life2->getName()) {
            return true;
        } else {
            return false;
        }
    }
}