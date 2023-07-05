#include <string>
#include <vector>
#include <map>
#include <queue>
#include <iostream>
#include <cmath>
#include <algorithm>
#include "GodDrinksCPP_src.hpp"
#include "extraLarge_src.hpp"
using namespace std;

namespace GodDrinksCPP {    
    // forward declaration
    Thing thing,thing1,thing2;
    World world;

    // 
    //  class Thing functions (help me pls)
    //
    void Thing::Lovable(string name, int int1, bool bool1, int int2, bool bool2) {
        thing_name = name;
        whatever_num1 = int1;
        whatever_bool1 = bool1;
        whatever_num2 = int2;
        whatever_bool2 = bool2;
    }

    tuple<unsigned int, unsigned int, unsigned int> Thing::getDimensions() {
        return thing_dimensions;
        cout << get<0>(thing_dimensions) << " " << get<1>(thing_dimensions) << " " << get<0>(thing_dimensions) << endl;
    }

    void Thing::setDimensions(tuple<unsigned int, unsigned int, unsigned int> dimensions) {
        thing_dimensions = dimensions;
        cout << get<0>(thing_dimensions) << " " << get<1>(thing_dimensions) << " " << get<0>(thing_dimensions) << endl;
    }

    unsigned int Thing::getCircumference() {
        return thing_circumference;
        cout << thing_circumference << endl;
    }

    void Thing::setCircumference(unsigned int circumference) {
        thing_circumference = circumference;
        cout << thing_circumference << endl;
    }

    void Thing::addAction(string name, double where) {
        map<string, double> action_packet;
        action_packet[name] = where;
        thing_actions.push_back(action_packet);
        cout << name << " " << where << endl;
    }

    float Thing::getXPosition() {
        return thing_x_position;
        cout << thing_x_position << endl;
    }

    float Thing::getTangent(float x_pos) {
        return tanf(x_pos);
        cout << tanf(x_pos) << endl;
    }

    int Thing::getLimit() {
        return thing_limit;
        cout << thing_limit << endl;
    }

    void Thing::setLimit(int limit) {
        thing_limit = limit;
        cout << thing_limit << endl;
    }

    void Thing::toggleCurrent() {
        if (thing_current == "DC") {
            thing_current = "AC";
        } else {
            thing_current = "DC";
        }
        cout << thing_current << endl;
    }

    // cursed code incoming
    void Thing::canSee(bool status) { 
        if (thing_cansee != status) {
            thing_cansee = !status;
        } else {
            thing_cansee = status;
        }
        cout << thing_cansee << endl;
    }
    
    void Thing::addFeeling(string feeling) {
        thing_feelings.push_back(feeling);
        cout << feeling << endl;
    }
    
    unsigned int Thing::getNumSimulationsAvailable() {
        return thing_simulations_available;
        cout << thing_simulations_available << endl;
    }

    unsigned int Thing::getNumSimulationsNeeded() {
        return thing_simulations_needed;
        cout << thing_simulations_needed << endl;
    }

    bool Thing::getSatisfaction() {
        return thing_satisfaction;
        cout << thing_satisfaction << endl;
    }

    void Thing::setSatisfaction(bool satisfaction) {
        thing_satisfaction = satisfaction;
        cout << thing_satisfaction << endl;
    }

    int Thing::getFeelingIndex(string search_feeling) {
        bool found = false;
        for (int i = 0; i < thing_feelings.size(); i++) {
            if (search_feeling == thing_feelings.at(i)) {
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

    void Thing::requestExecution(World world) {
        cout << "World executor change requested" << endl;
        world.setNextExecutor(thing_name);
    }

    unsigned int Thing::getNutrients() {
        return thing_nutrients;
    }

    void Thing::setNutrients(unsigned int nutrients) {
        thing_nutrients += nutrients;
    }

    void Thing::resetNutrients() {
        thing_nutrients = 0;
    }

    unsigned int Thing::getAntiOxidiants() {
        return thing_antioxidiants;
    }

    void Thing::setAntiOxidiants(unsigned int antioxidiants) {
        thing_antioxidiants += antioxidiants;
    }

    void Thing::resetAntiOxidiants() {
        thing_antioxidiants = 0;
    }

    void Thing::purr() {
        cout << "Purr." << endl;
    }

    void Thing::setLocked(bool state) {
        if (thing_locked != state) {
            thing_locked = !state;
        } else {
            thing_locked = state;
        }
    }

    bool Thing::getProof() {
        return thing_proof;
    }

    void Thing::setProof(bool proof) {
        thing_proof = proof;
    }

    void Thing::toggleGender() {
        if (thing_gender == 'F') {
            thing_gender = 'M';
        } else {
            thing_gender = 'F';
        }
    }

    void Thing::toggleRoleBDSM() {
        if (thing_bdsm_role == 'S') {
            thing_bdsm_role = 'D';
        } else {
            thing_bdsm_role = 'S';
        }
        cout << thing_bdsm_role << endl;
    }
    
    bool Thing::getSenseIndex(string sense) {
        bool found = false;
        for (int i = 0; i < thing_sensings.size(); i++) {
            if (sense == thing_sensings.at(i)) {
                found = true;
                break;
            }
        }
        return found;
    }

    tuple<string, bool, bool> Thing::getMemory() {
        return thing_memories.front();
    }

    bool Thing::lookFor(Thing thing, World world) {
        vector<Thing> fetched_characters = world.getThings();
        vector<Thing>::iterator search_iterator;
        bool found = false;
        for (search_iterator = fetched_characters.begin(); search_iterator != fetched_characters.end(); search_iterator++) {
            if (search_iterator->getName() == thing.getName()) {
                found = true;
                break;
            }
        }
        return found;
    }
    
    void Thing::removeFeeling(string feeling) {
        vector<string>::iterator delete_iter;
        delete_iter = remove(thing_feelings.begin(),thing_feelings.end(),feeling);
    }

    string Thing::getOpinionIndex(string opinion) {
        string search_opinion = "";
        vector<tuple<string, bool>>::iterator search_iter;
        for (search_iter = thing_opinions.begin(); search_iter != thing_opinions.end(); search_iter++) {
            search_opinion = get<0>(*search_iter);
            if (search_opinion == opinion) {
                break;
            }
        }
        return opinion;
    }

    void Thing::setOpinion(string opinion, bool belief) {
        tuple<string, bool> opinion_packet = make_tuple(opinion, belief);
        thing_opinions.push_back(opinion_packet);
    }      

    string Thing::getExecution() {
        return thing_execution;
    }

    void Thing::setExecution(string execution) {
        thing_execution = execution;
    }

    void Thing::escapeWorld(World world) {
        cout << thing_name << " escaped from world." << endl;
        //world.removeThing();
    }

    void Thing::takeExamTopic(string topic) {
        cout << "Taking exam in " << topic << endl;
    }

    void Thing::getAlgebraicExpression(string topic) {
        cout << "Algebraic expression of " << topic << " is unknown." << endl;
    }

    // support functions (not explicitly referenced in the song)
    string Thing::getName() {
        return thing_name;
        cout << thing_name << endl;
    }

    void Thing::timeTravel(int year) {
        thing_year = year;
        cout << year << endl;
    }

    void Thing::setHigh(bool high) {
        thing_high = high;
    }

    void Thing::escapeTopic(string topic) {
        cout << thing_name << " escaped from " << topic << endl;
    }
    
    // 
    //  class World functions (help again)
    //
    void World::World_set(int num) {
        world_num = num;
    }

    void World::addThing(Thing thing) {
        world_characters.push_back(thing);
    }

    void World::startSimulation() {
        cout << "Simulation started." << endl;
        world_in_execution = true;
    }

    void World::timeTravelForTwo(string common_era, unsigned int year, Thing* thing1, Thing* thing2) {
        int numerical_year;
        if (common_era == "AD") {
            numerical_year = 1 * year;
        } else {
            numerical_year = -1 * year;
        }
        world_year = numerical_year;
        thing1->timeTravel(numerical_year);
        thing2->timeTravel(numerical_year);
    }

    void World::unite(Thing thing1, Thing thing2) {
        map<string, string> couple;
        couple[thing1.getName()] = thing2.getName();
        world_couples.push_back(couple);
        cout << "United " << thing1.getName() << " and " << thing2.getName() << endl;
    }

    string World::getGod() {
        return world_god;
    }

    void World::setGod(string god) {
        world_god = god;
    }

    void World::procreate(Thing thing1, Thing thing2) {
        cout << "Procreating " << thing1.getName() << " and " << thing2.getName() << endl;
    }

    void World::makeHigh(Thing thing) {
        thing.setHigh(true);
    }

    void World::lockThing(Thing thing) {
        thing.setLocked(true);
        world_locked_characters.push_back(thing);
    }

    void World::removeThing(Thing thing) {
        vector<Thing>::iterator delete_iter, get_wiped_off_the_vector;
        for (delete_iter = world_characters.begin(); delete_iter != world_characters.end(); delete_iter++) {
            if (compare_instance(&*delete_iter,&thing)) {
                //bad_alloc if you delete straight in the loop, assign an external iterator for deletion
                get_wiped_off_the_vector = delete_iter; 
                break;
            }
        }
        world_characters.erase(get_wiped_off_the_vector);
    }

    void World::unlockThing(Thing thing) {
        thing.setLocked(false);
        vector<Thing>::iterator delete_iter, get_wiped_off_the_vector;
        for (delete_iter = world_locked_characters.begin(); delete_iter != world_locked_characters.end(); delete_iter++) {
            if (compare_instance(&*delete_iter,&thing)) {
                get_wiped_off_the_vector = delete_iter;
                break;
            }
        }
        world_locked_characters.erase(get_wiped_off_the_vector);
    } 

    //optional argument
    void World::announce(string text, string locale) { 
        if (locale == "") {
            cout << "Announced " << text << endl;
        } else {
            cout << "Announced " << text << " in " << locale << " locale" << endl;
        }
        
    }
    
    bool World::getThing(Thing thing) {
        bool found = false;
        vector<Thing>::iterator search_iter;

        for (search_iter = world_characters.begin(); search_iter != world_characters.end(); search_iter++) {
            if (compare_instance(&*search_iter, &thing)) {
                found = true;
                break;
            }
        }
        return found;
    }

    bool World::isExecutableBy(Thing thing) {
        if (thing.getName() == world_executor || thing.getName() == world_next_executor) {
            return true;     
        } else {
            return false;
        }
    }

    void World::runExecution() {
        if (world_in_execution) {
            cout << "Execution already running." << endl;
        } else {
            cout << "Running execution." << endl;
            world_in_execution = true;
        }
        
    }

    void World::execute(Thing thing) {
        cout << "Executed Thing named " << thing.getName() << endl;
    }

    // extended functions
    vector<extraLarge::Object> World::getObjects() {
        return world_objects;
    }

    // support functions
    void World::setNextExecutor(string name) {
        world_next_executor = name;
        cout << "Switched next world executor to " << name << "." << endl;
    }        

    vector<Thing> World::getThings() {
        return world_characters;
    }

    // general + global functions
    bool compare_instance(Thing* thing1, Thing* thing2) {
        if (thing1->getName() == thing2->getName()) {
            return true;
        } else {
            return false;
        }
    }

    bool isErasable(tuple<string, bool, bool> memory_packet) {
        if (get<2>(memory_packet)) {
            return true;
        } else {
            return false;
        }
    }
}
