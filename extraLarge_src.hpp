#include <string>
#include <vector>
#include <tuple>
#include <map>
#ifndef EXTRALARGE_H //include guard (just knew that)
#define EXTRALARGE_H

namespace extraLarge {
    class Object {
        private:
            // song parameters
            std::string object_name;
            std::vector<std::tuple<std::string, unsigned int>> object_attribute;
            std::vector<std::string> object_art_tags;
        public:
            // song functions
            void setObjects(std::string name, std::string attribute_name, unsigned int attribute_rating);
            std::vector<std::string> getArtTags();

            // support functions
            std::tuple<std::string, unsigned int> getAttribute(std::string attribute_name);
            std::vector<std::tuple<std::string, unsigned int>> getAttributes();
            void setArtTags(std::string art_tag);
    };

    class Life {
        private:
            // song parameters
            std::vector<std::string> life_physical_attributes;
            std::vector<std::tuple<std::string, std::string>> life_fetishes;
            std::vector<std::tuple<std::string, std::string>> life_memories;
        public:
            // song functions
            void Ghost();
            void addPhysicalAttribute(std::string physical_attribute);
    };

    class Rule {
        private:
            std::string rule_name;
            bool rule_enforcement;
        public:
            void setRule(std::string name, bool enforcement);
    };

    // general + global function
    bool sortObject(Object object1, Object object2);
    std::vector<Object> sortByAttribute(std::vector<Object> object_vec, std::string attribute);
    int getIndexOf(Object object, std::string art_tag);
    int searchByType(std::vector<std::tuple<std::string, std::string>> fetish_vec, std::string fetish_name, std::string fetish_property);
}

#endif