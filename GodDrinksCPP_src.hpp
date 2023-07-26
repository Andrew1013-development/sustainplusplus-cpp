#include <tuple>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <array>
#ifndef GODDRINKSCPP_H //include guard (just knew that)
#define GODDRINKSCPP_H
#include "extraLarge_src.hpp"

namespace GodDrinksCPP {
    //forward declaration (again)
    class Thing;
    class World;
    class Relationship;

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
            std::vector<extraLarge::Object> world_objects;
            std::vector<std::map<std::string, extraLarge::Life>> world_best_awards;
            std::vector<extraLarge::Rule> world_rules;
            std::string world_name = "world";
            std::queue<std::tuple<unsigned long long, std::string, extraLarge::Life>> world_messages; 
            std::vector<Relationship> world_relationships;
            std::queue<extraLarge::Life> world_execution_queue;
            std::array<std::string,15> world_rivers;
            std::vector<std::pair<extraLarge::Life, std::vector<std::string>>> world_muted_tags;
            std::vector<extraLarge::Life> world_top_one_percent;
            
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
            void execute(extraLarge::Life life);
            
            // extended functions
            std::vector<extraLarge::Object> getObjects();
            void giveBestAward(std::string name, extraLarge::Life target);
            void addRule(extraLarge::Rule rule);
            void sendMessage(std::string message, extraLarge::Life target);
            Relationship getRelationship(extraLarge::Life person1, extraLarge::Life person2);
            std::array<std::string, 15> getRiver();
            void mute(extraLarge::Life life, std::vector<std::string> tags);
            std::vector<extraLarge::Life> getLifeTopOnePercent();
            void addPollution(std::string environment, std::string cause, extraLarge::Life causer);
            std::vector<extraLarge::Ghost_t> search(extraLarge::Life person, std::string tag);
            
            // support functions
            void setNextExecutor(std::string name);
            std::vector<Thing> getThings();
            std::string getName();
    };

    // support classes (from sustain++)
    class Relationship {
        private:
            extraLarge::Life relationship_person1;
            extraLarge::Life relationship_person2;
            short relationship_status; // 0 if ended, 1 if in progress, -1 if null
            double relationship_sustainability;
        public:
            void endRelationship();
            std::pair<extraLarge::Life, extraLarge::Life> getRelationshipPeople();
            void setSustain(double sustainability);
            void increaseSustain();
    };

    // general + global functions
    bool compare_instance(Thing* thing1, Thing* thing2);
    bool isErasable(std::tuple<std::string, bool, bool> memory_packet);
}

#endif