#include <string>
#include <vector>
#include <tuple>
#include <queue>
#include <functional>
#ifndef EXTRALARGE_H //include guard (just knew that)
#define EXTRALARGE_H

namespace extraLarge {
    // forward declaration
    class Object;
    class Life;
    class Rule;
    class Exception;

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
            std::vector<Life> life_memories;
            std::vector<std::tuple<Life, std::string>> life_nicknames;
            std::queue<std::string> life_thoughts;
            
            // support parameters
            std::string life_name = "life";
        public:
            // preset data
            
            // song functions
            void Ghost();
            void addPhysicalAttribute(std::string physical_attribute);
            std::vector<std::tuple<std::string, std::string>> getFetishes();
            void addMemory(Life memory);
            Life getMemory(Life memory);
            void setNickname(Life target, std::string nickname);
            std::string codeMessage(std::string message, std::string codec);
            std::string decodeMessage(std::string message, std::string codec);
            void announce(std::string announcement);
            std::queue<std::string> getThoughts();
            std::string getThought();
            void sayTo(std::string message, Life target);
            void clearThoughts();
            
            // support functions
            std::string getName();
    };

    class Rule {
        private:
            std::string rule_name;
            bool rule_enforcement;
        public:
            // song functions
            void setRule(std::string name, bool enforcement);

            // support functions
    };

    // exceptions class
    class Exception {
        std::string exception_name = "generic exception";
    };

    class InsufficientIntelligenceQuotientException : public Exception {
        std::string exception_name = "insufficient intelligence quotient exception";
    };

    class TooMuchOfAPussyException : public Exception {
        std::string exception_name = "too much of a pussy exception";
    };

    // general + global function
    bool sortObject(Object object1, Object object2);
    std::vector<Object> sortByAttribute(std::vector<Object> object_vec, std::string attribute);
    int getIndexOf(Object object, std::string art_tag);
    int searchByType(std::vector<std::tuple<std::string, std::string>> fetish_vec, std::string fetish_name, std::string fetish_property);
    bool compare_lives(Life* life1, Life* life2);
}

#endif