#include <iostream>
#include <sstream>
#include <format>
#include <vector>
#include <tuple>
#include <map>
#include <string>
#include <cstring>
#include <algorithm>
#include <optional>
#include <array>
#include <queue>
#include <cmath>
#include <chrono>
#include <random>
#include "extraLarge_src.hpp"
using namespace std;

namespace extraLarge {    
    // forward declaration
    Object object1,object2;
    Life life1, life2;
    
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
    vector<Object> World::getObjects() {
        return world_objects;
    }

    void World::giveBestAward(string name, Life target) {
        map<string, Life> award_packet;
        award_packet[name] = target;
        world_best_awards.push_back(award_packet);
    }

    void World::addRule(Rule rule) {
        world_rules.push_back(rule);
    }

    void World::sendMessage(string message, Life target) {
        const auto clock = chrono::system_clock::now();
        unsigned long long unix_timestamp = chrono::duration_cast<chrono::seconds>(clock.time_since_epoch()).count();
        tuple<unsigned long long, string, Life> message_packet = make_tuple(unix_timestamp, message, target);
        world_messages.push(message_packet);
    }

    Relationship World::getRelationship(Life person1, Life person2) {
        bool cmp1; 
        bool cmp2;
        for (Relationship r_search : world_relationships) {
            cmp1 = (
                r_search.getRelationshipPeople().first.getName() == person1.getName() || 
                r_search.getRelationshipPeople().first.getName() == person2.getName()
            );
            cmp2 = (
                r_search.getRelationshipPeople().second.getName() == person1.getName() || 
                r_search.getRelationshipPeople().second.getName() == person2.getName()
            );
            if (cmp1 || cmp2) {
                return r_search;
                break;
            }
        }
    }

    void World::execute(Life life) {
        world_execution_queue.push(life);
    }

    array<string, 15> World::getRiver() {
        return world_rivers;
    }

    void World::mute(Life life, vector<string> tags) {
        world_muted_tags.push_back(make_pair(life, tags));
    }

    vector<Life> World::getLifeTopOnePercent() {
        return world_top_one_percent;
    }

    void World::addPollution(string environment, string cause, Life causer) {
        world_pollutions.push_back(make_tuple(environment,cause,causer));
    }

    vector<Ghost_t> World::search(Life person, string tag) {
        
    }

    vector<Vulnerability> World::getVulnerabilities() {
        return world_vulnerabilities;
    }

    void World::setRelationship(Life person1, Life person2, double love) {
        bool found = false;
        for (Relationship r : world_relationships) {
            bool cmp1 = (compare_lives(&r.getRelationshipPeople().first, &person1) 
            || compare_lives(&r.getRelationshipPeople().second, &person1));
            bool cmp2 = (compare_lives(&r.getRelationshipPeople().first, &person2) 
            || compare_lives(&r.getRelationshipPeople().second, &person2));
            if (cmp1 && cmp2) {
                found = true;
                r.setSustain(love);
            }
        }

        if (!found) {
            world_relationships.push_back(Relationship(person1,person2,love));
        }
    }

    // support functions
    void World::setNextExecutor(string name) {
        world_next_executor = name;
        cout << "Switched next world executor to " << name << "." << endl;
    }        

    vector<Thing> World::getThings() {
        return world_characters;
    }

    string World::getName() {
        return world_name;
    }

    //
    // class Relationship functions
    //
    // class constructor with optional argument
    Relationship::Relationship(Life person1, Life person2, double sustainability = 1.0) { 
        relationship_person1 = person1;
        relationship_person2 = person2;
        relationship_status = 1;
        relationship_sustainability = sustainability;
    }

    void Relationship::endRelationship() {
        relationship_status = 0;
    }

    pair<Life, Life> Relationship::getRelationshipPeople() {
        return make_pair(relationship_person1,relationship_person2);
    }

    void Relationship::setSustain(double sustainability) {
        relationship_sustainability = sustainability;
    }

    void Relationship::increaseSustain() {
        relationship_sustainability += 1.0;
    }

    void Relationship::challenge() {
        cout << "Oh no, a relationship between " << relationship_person1.getName() << " and " << relationship_person2.getName() << " is being challenged!";
        default_random_engine random_eng;
        uniform_real_distribution<double> uniform_dist(0.0,5.0);
        relationship_sustainability -= uniform_dist(random_eng);
    }

    void Relationship::end() {
        relationship_status = 0;
        relationship_sustainability = 0;
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
        Memory m;
        m.setTopic(memory.getName());
        m.setLove(1.0);
        life_memories.push_back(m);
    }

    Memory Life::getMemory(Life memory) {
        for (Memory m_search : life_memories) {
            if (m_search.getTopic() == memory.getName()) {
                return m_search;
                break;
            }
        }
    }

    void Life::setNickname(Memory memory, string nickname) {
        tuple<Life, string> nickname_packet = make_tuple(memory.getLife(),nickname);
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

    void Life::transferThoughts(Life source) {
        life_thoughts = source.getThoughts();
    }

    void Life::transferAttributes(Life source) {
        life_physical_attributes = source.getAttributes();
    }

    void Life::fight(Life opponent) {
        cout << life_name << " is fighting " << opponent.getName() << "!" << endl;
    }

    void Life::setMemory(string topic, double love) {
        for (Memory m_search : life_memories) {
            if (m_search.getTopic() == topic) {
                m_search.setLove(love);
            }
        }
    }

    void Life::command(Life person, string command) {

    }

    unsigned long Life::getFinancesProperties() {

    }

    void Life::pay(Life person, unsigned long amount, string note) {

    }

    void Life::love(Life person) {

    }

    void Life::praise(Life person, string reason) {

    }

    void Life::gift(Life person, string gift) {

    }

    void Life::consumeLast() {

    }

    void Life::addFamily(Ghost_t ghost) {

    }

    bool Life::isHappy() {
        return life_happy;
    }

    void Life::removeFamily(Ghost_t ghost) {

    }

    std::vector<Ghost_t> Life::getDreamParents() {
        return life_dream_parents;
    }

    void Life::setParents(vector<Ghost_t> parents) {
        life_parents = parents;
    }

    void Life::throwTantrum() {
        cout << life_name << " is complaining angrily about something!" << endl;
    }

    void Life::ask(Life person, string question) {
        cout << life_name << " has asked " << person.getName() << " this question: " << endl;
        cout << question << endl;  
    }

    void Life::callFor(Life person) {
        cout << life_name << " has called " << person.getName() << endl;
    }

    void Life::askWorld(World world, string question) {
        world.addQuestion(question);
    }

    void Life::setVocabulary(vector<string> vocabulary) {
        life_vocabulary = vocabulary;
    }

    void Life::disorient(Life person) {
        cout << life_name << " has disoriented " << person.getName() << endl;
    }

    bool Life::listenTelepathically(Life person, World world) {
        cout << "Trying to listen for " << person.getName() << "'s message in the world" << endl;
        if (world.findMessages(person)) {
            return false;
        } else {
            return true;
        }
    }

    void Life::ignoreCommands() {
        cout << life_name << " ignored incoming commands" << endl;
    }

    void Life::setMessages(unsigned long number) {
        if (life_messages.size() > number) {
            for (unsigned long i = 0; i < life_messages.size() - number; i++) {
                life_messages.pop();
            }
        } 
    }

    void Life::manipulate(Life person, string technique) {
        cout << life_name << " manipulated " << person.getName() << " with the " << technique << " technique" << endl;
    }

    void Life::setMemory(Life memory, unsigned int love) {
        life_memories.push_back(Memory(memory,"",love));
    }

    bool Life::getMemory(Life memory, string topic) {
        bool found = true;
        for (Memory l_m : life_memories) {
            if (compare_lives(&l_m.getLife(),&memory) && l_m.getTopic() == topic) {
                found = true;
                break;
            }
        }
        return found;
    }

    // support functions
    string Life::getName() {
        return life_name;
    }

    vector<string> Life::getAttributes() {
        return life_physical_attributes;
    }

    //
    //  class Rule functions
    //
    void Rule::setRule(string name, bool enforcement) {
        rule_name = name;
        rule_enforcement = enforcement;
    }
    
    //
    // class Simulation functions
    //
    Simulation::Simulation(Life person, World world, unsigned long year, unsigned long id) { //class constructor
        simulation_person = person;
        simulation_world = world;
        simulation_year = year;
        simulation_id = id;
        simulation_originality = 100;
    }

    unsigned long Simulation::compareToOriginal(Life person) {
        if (compare_lives(&person, &simulation_person)) {
            return simulation_originality;
        }
    }

    //
    // class Ghost_t functions
    //
    Ghost_t::Ghost_t(string name) { // class constructor
        ghost_name = name;
    } 

    int Ghost_t::getID() {
        return ghost_id;
    }

    //
    // class War functions
    //
    double War::getScore(Life person) {
        if (compare_lives(&person,&fighter)) {
            return fighter_score;
        }
        if (compare_lives(&person,&opponent)) {
            return opponent_score;
        }
        return 0.0;
    }

    //
    // class Memory functions
    //
    Memory::Memory(Life life, string topic, unsigned int love) { // class constructor
        memory_life = life;
        memory_topic = topic;
        memory_love = love;
    }

    string Memory::getTopic() {
        return memory_topic;
    }

    double Memory::getLove() {
        return memory_love;
    }

    void Memory::setTopic(string topic) {
        Life empty;
        memory_topic = topic;
        memory_life = empty;
    }

    void Memory::setLove(double love) {
        memory_love = love;
    }

    // support functions
    void Memory::setTopic(Life topic) {
        memory_life = topic;
        memory_topic = topic.getName();
    }

    Life Memory::getLife() {
        return memory_life;
    }

    //
    // class Vulnerability functions
    //
    Vulnerability::Vulnerability(string name) {
        vulnerability_name = name;
    }

    string Vulnerability::getName() {
        return vulnerability_name;
    }

    void Vulnerability::setAuthors(Life author) {
        vulnerability_author = author;
    }

    void Vulnerability::setAuthors(unsigned long number) {
        if (number == NULL) {
            
        }
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

    vector<Vulnerability> getZeroDays(vector<Vulnerability> vulnerabilities) {
        vector<Vulnerability> v_result;
        for (Vulnerability v : vulnerabilities) {
            if (v.getName() == "zero days") {
                v_result.push_back(v);
            }
        }
        return v_result;
    }
}