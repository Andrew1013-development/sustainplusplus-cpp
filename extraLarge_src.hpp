#include <string>
#include <vector>
#include <tuple>
#include <queue>
#include <stack>
#include <functional>
#include <optional>
#ifndef EXTRALARGE_H //include guard (just knew that)
#define EXTRALARGE_H
#include "GodDrinksCPP_src.hpp"

namespace extraLarge {
    // forward declaration
    class Object;
    class Life;
    class Simulation;
    class Memory;
    class War;
    class Exception;
    class Ghost_t;
    class Vulnerabity;

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
            std::vector<Memory> life_memories;
            std::vector<std::tuple<Life, std::string>> life_nicknames;
            std::queue<std::string> life_thoughts;
            std::stack<std::string> life_lovers;
            bool life_happy = true;
            std::vector<Ghost_t> life_family;
            std::vector<Ghost_t> life_dream_parents = {Ghost_t("not a ghost 1"), Ghost_t("not a ghost 2")};
            std::vector<std::string> life_vocabulary;

            // support parameters
            std::string life_name = "life";
        public:
            // preset data
            
            // song functions
            void Ghost();
            void addPhysicalAttribute(std::string physical_attribute);
            std::vector<std::tuple<std::string, std::string>> getFetishes();
            void addMemory(Life memory);
            Memory getMemory(Life memory);
            void setNickname(Memory memory, std::string nickname);
            std::string codeMessage(std::string message, std::string codec);
            std::string decodeMessage(std::string message, std::string codec);
            void announce(std::string announcement);
            std::queue<std::string> getThoughts();
            std::string getThought();
            void sayTo(std::string message, Life target);
            void clearThoughts();
            void transferThoughts(Life source);
            void transferAttributes(Life source);
            void fight(Life opponent);
            void command(Life person, std::string command);
            unsigned long getFinancesProperties();
            void pay(Life person, unsigned long amount, std::string note);
            void love(Life person);
            void praise(Life person, std::string reason);
            void gift(Life person, std::string gift);
            void consumeLast();
            void addFamily(Ghost_t ghost);
            bool isHappy();
            void removeFamily(Ghost_t ghost);
            std::vector<Ghost_t> getDreamParents();
            void setParents(std::vector<Ghost_t> parents);
            void throwTantrum();
            void ask(Life person, std::string question);
            void callFor(Life person);
            void askWorld(GodDrinksCPP::World world, std::string question);
            void setVocabulary(std::vector<std::string> vocabulary);
            void disorient(Life person);
            std::vector<War> getOngoingFights();
            // support functions
            std::string getName();
            std::vector<std::string> getAttributes();
    };

    class Rule {
        private:
            std::string rule_name;
            bool rule_enforcement;
        public:
            // song functions
            void setRule(std::string name, bool enforcement);
    };

    class Simulation {
        private:
            // song parameters
            Life simulation_person;
            GodDrinksCPP::World simulation_world;
            unsigned long simulation_year;
            unsigned long simulation_id;
            unsigned long simulation_originality;
        public:
            // song functions
            Simulation(Life person, GodDrinksCPP::World world, unsigned long year, unsigned long id); //constructor
            unsigned long compareToOriginal(Life person);
    };

    class Ghost_t {
        private:
            std::string ghost_name = "ghost";
            int ghost_id = NULL;
        public:
            Ghost_t(std::string name); //constructor
            int getID();
    };

    class War {
        private:
            Life fighter;
            Life opponent;
            bool victory;
            double fighter_score;
            double opponent_score;
        public:
            double getScore(Life person);
    };

    // support classes
    class Memory {
        private:
            std::string memory_topic;
            unsigned int memory_love;
            Life memory_life;
        public:
            // song functions
            std::string getTopic();
            double getLove();
            void setTopic(std::string topic);
            void setLove(double love);

            // support functions
            void setTopic(Life topic);
            Life getLife();
    };

    class Vulnerability {

    };

    // exceptions class
    class Exception {
        std::string exception_name = "unnamed exception";
    };

    class InsufficientIntelligenceQuotientException : public Exception {
        std::string exception_name = "insufficient intelligence quotient exception";
    };

    class TooMuchOfAPussyException : public Exception {
        std::string exception_name = "too much of a pussy exception";
    };

    class NotAMindReaderException : public Exception {
        std::string exception_name = "not a mind reader exception";
    };

    // general + global function
    bool sortObject(Object object1, Object object2);
    std::vector<Object> sortByAttribute(std::vector<Object> object_vec, std::string attribute);
    int getIndexOf(Object object, std::string art_tag);
    int searchByType(std::vector<std::tuple<std::string, std::string>> fetish_vec, std::string fetish_name, std::string fetish_property);
    bool compare_lives(Life* life1, Life* life2);
    bool compare_parents(std::vector<Ghost_t> dream_parents, std::vector<Ghost_t> actual_parents);
}

#endif