#include "GodDrinksCPP_src.hpp"
#include "extraLarge_src.hpp"
#include <iostream>
using namespace std;

namespace extraLarge {    
    void Life::Ghost() {
        cout << "A ghost has been created." << endl;
    }

    void Rule::setRule(string name, bool enforcement) {
        rule_name = name;
        rule_enforcement = enforcement;
    }
    
    void Simulation::setSimulation(Life life, GodDrinksCPP::World world, int year, unsigned int num) {
        simulation_lives.push_back(life);
        simulation_world = world;
        simulation_year = year;
        whatever_num = num;
    }
}