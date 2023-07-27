#include <string>
#include <vector>
#include <tuple>
#include <queue>
#include <stack>
#include <functional>
#include <optional>
#include <map>
#include <array>
#ifndef EXTRALARGE_H //include guard (just knew that)
#define EXTRALARGE_H

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
    class Thing;
    class World;
    class Relationship;
    class Rule;

    class Ghost_t {
        private:
            std::string ghost_name = "ghost";
            int ghost_id = NULL;
        public:
            Ghost_t(std::string name); //constructor
            int getID();
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
            std::vector<Ghost_t> life_ghosts = {Ghost_t("old mom"), Ghost_t("old dad")};
            std::vector<Ghost_t> life_family;
            std::vector<Ghost_t> life_dream_parents = {Ghost_t("my dream dad"), Ghost_t("my dream mom")};
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
            void askWorld(World world, std::string question);
            void setVocabulary(std::vector<std::string> vocabulary);
            void disorient(Life person);
            std::vector<War> getOngoingFights();
            void setMemory(std::string topic, double love);

            // support functions
            std::string getName();
            std::vector<std::string> getAttributes();
    };

    class Thing {
        private:
            // initial parameters
            std::string thing_name;
            int whatever_num1;
            bool whatever_bool1;
            int whatever_num2;
            bool whatever_bool2;

            // song parameters
            std::tuple<unsigned int, unsigned int, unsigned int> thing_dimensions = std::make_tuple(1,2,3); 
            unsigned int thing_circumference = 0;
            std::vector<std::map<std::string, double>> thing_actions;
            int thing_limit = 4;
            std::string thing_current = "DC";
            bool thing_cansee = true;
            std::vector<std::string> thing_feelings;
            unsigned int thing_simulations_available = 420;
            unsigned int thing_simulations_needed = 69;
            bool thing_satisfaction = true;
            unsigned int thing_nutrients = 7;
            unsigned int thing_antioxidiants = 8;
            bool thing_proof = true;
            char thing_gender = 'M';
            char thing_bdsm_role = 'D';
            bool thing_high = false;
            std::vector<std::string> thing_sensings;
            std::queue<std::tuple<std::string,bool,bool>> thing_memories;
            std::vector<std::tuple<std::string, bool>> thing_opinions;
            std::string thing_execution = "amogus";

            // support parameters
            float thing_x_position = 0.69f;
            int thing_year = 2023;
            bool thing_locked = false;
        public:
            // song functions
            void Lovable(std::string name, int int1, bool bool1, int int2, bool bool2);
            std::tuple<unsigned int, unsigned int, unsigned int> getDimensions();
            void setDimensions(std::tuple<unsigned int, unsigned int, unsigned int> dimensions);
            unsigned int getCircumference();
            void setCircumference(unsigned int circumference);
            void addAction(std::string name, double where);
            float getXPosition();
            float getTangent(float x_pos);
            int getLimit();
            void setLimit(int limit);
            void toggleCurrent();
            void canSee(bool status);
            void addFeeling(std::string feeling);
            unsigned int getNumSimulationsAvailable();
            unsigned int getNumSimulationsNeeded();
            bool getSatisfaction();
            void setSatisfaction(bool satisfaction);
            int getFeelingIndex(std::string search_feeling);
            void requestExecution(World world);
            unsigned int getNutrients();
            void setNutrients(unsigned int nutrients);
            void resetNutrients();
            unsigned int getAntiOxidiants();
            void setAntiOxidiants(unsigned int antioxidiants);
            void resetAntiOxidiants();
            void purr();
            void setLocked(bool state);
            bool getProof();
            void setProof(bool proof);
            void toggleGender();
            void toggleRoleBDSM();
            bool getSenseIndex(std::string sense);
            std::tuple<std::string, bool, bool> getMemory();
            bool lookFor(Thing thing, World world);
            void removeFeeling(std::string feeling);
            std::string getOpinionIndex(std::string opinion);
            void setOpinion(std::string opinion, bool belief);
            std::string getExecution();
            void setExecution(std::string execution);
            void escapeWorld(World world);
            void takeExamTopic(std::string topic);
            void getAlgebraicExpression(std::string topic);
            
            // support functions
            std::string getName();
            void timeTravel(int year);
            void setHigh(bool high);
            void escapeTopic(std::string topic);
    };

    class Vulnerability {
        private:
            std::string vulnerability_name;
            Life vulnerability_author;
        public:
            Vulnerability(std::string name); // constructor
            std::string getName();
            void setAuthors(Life author);
            void setAuthors(unsigned long number);
    };

    // exceptions class
    class Exception {
        private:
            std::string exception_name = "unnamed exception";
        public:
            Exception(); // constructor
    };

    class InsufficientIntelligenceQuotientException : public Exception {
        private:
            std::string exception_name = "insufficient intelligence quotient exception";
        public:
            InsufficientIntelligenceQuotientException(); // constructor
    };

    class TooMuchOfAPussyException : public Exception {
        private:
            std::string exception_name = "too much of a pussy exception";
        public:
            TooMuchOfAPussyException(); // constructor
    };

    class NotAMindReaderException : public Exception {
        private:
            std::string exception_name = "not a mind reader exception";
        public:
            NotAMindReaderException(); // constructor
    };

    class World {
        private:
            // initial parameters
            int world_num;
            std::vector<Thing> world_characters;
            
            // song parameters
            int world_year = 2023;
            std::vector<Thing> world_locked_characters;
            std::string world_god = "me";
            
            // extended parameters
            std::vector<Object> world_objects;
            std::vector<std::map<std::string, Life>> world_best_awards;
            std::vector<Rule> world_rules;
            std::string world_name = "world";
            std::queue<std::tuple<unsigned long long, std::string, Life>> world_messages; 
            std::vector<Relationship> world_relationships;
            std::queue<Life> world_execution_queue;
            std::array<std::string,15> world_rivers;
            std::vector<std::pair<Life, std::vector<std::string>>> world_muted_tags;
            std::vector<Life> world_top_one_percent;
            std::vector<Vulnerability> world_vulnerabilities = {Vulnerability("zero days"), Vulnerability("buffer overflow")};
            
            // support parameters
            std::vector<std::map<std::string, std::string>> world_couples;
            std::string world_executor = "amogus";
            std::string world_next_executor = "amogus";
            bool world_in_execution = false;
        public:
            // song functions
            void World_set(int num);
            void addThing(Thing thing);
            void startSimulation();
            void timeTravelForTwo(std::string common_era, unsigned int year, Thing* thing1, Thing* thing2);
            void unite(Thing thing1, Thing thing2);
            std::string getGod();
            void setGod(std::string god);
            void procreate(Thing thing1, Thing thing2);
            void makeHigh(Thing thing);
            void lockThing(Thing thing);
            void removeThing(Thing thing);
            void unlockThing(Thing thing);
            void announce(std::string text, std::string locale);
            bool getThing(Thing thing);
            bool isExecutableBy(Thing thing);
            void runExecution();
            void execute(Thing thing);
            void execute(Life life);
            
            // extended functions
            std::vector<Object> getObjects();
            void giveBestAward(std::string name, Life target);
            void addRule(Rule rule);
            void sendMessage(std::string message, Life target);
            Relationship getRelationship(Life person1, Life person2);
            std::array<std::string, 15> getRiver();
            void mute(Life life, std::vector<std::string> tags);
            std::vector<Life> getLifeTopOnePercent();
            void addPollution(std::string environment, std::string cause, Life causer);
            std::vector<Ghost_t> search(Life person, std::string tag);
            std::vector<Vulnerability> getVulnerabilities();
            
            // support functions
            void setNextExecutor(std::string name);
            std::vector<Thing> getThings();
            std::string getName();
    };

    // support classes (from sustain++)
    class Relationship {
        private:
            Life relationship_person1;
            Life relationship_person2;
            short relationship_status; // 0 if ended, 1 if in progress, -1 if null
            double relationship_sustainability;
        public:
            void endRelationship();
            std::pair<Life, Life> getRelationshipPeople();
            void setSustain(double sustainability);
            void increaseSustain();
    };

    // general + global functions
    bool compare_instance(Thing* thing1, Thing* thing2);
    bool isErasable(std::tuple<std::string, bool, bool> memory_packet);

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
            World simulation_world;
            unsigned long simulation_year;
            unsigned long simulation_id;
            unsigned long simulation_originality;
        public:
            // song functions
            Simulation(Life person, World world, unsigned long year, unsigned long id); //constructor
            unsigned long compareToOriginal(Life person);
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

    // general + global function
    bool sortObject(Object object1, Object object2);
    std::vector<Object> sortByAttribute(std::vector<Object> object_vec, std::string attribute);
    int getIndexOf(Object object, std::string art_tag);
    int searchByType(std::vector<std::tuple<std::string, std::string>> fetish_vec, std::string fetish_name, std::string fetish_property);
    bool compare_lives(Life* life1, Life* life2);
    bool compare_parents(std::vector<Ghost_t> dream_parents, std::vector<Ghost_t> actual_parents);
    std::vector<Vulnerability> getZeroDays(std::vector<Vulnerability> vulnerabilities);
}

#endif