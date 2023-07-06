#include "GodDrinksCPP_src.hpp" // world.execute(me) code 
#include "extraLarge_src.hpp"
#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;
using namespace GodDrinksCPP;
using namespace extraLarge;

// implement class here first
// 

// translate code here
void sustainPlusPlus_func() {
    World world;
    Life me, you;
    me.Ghost();
    you.Ghost();

    sortByAttribute(world.getObjects(),"beauty");
    if (getIndexOf(*(world.getObjects().begin()),"abstract") != -1) {
        me.addPhysicalAttribute("ugly");
        you.addPhysicalAttribute("ugly");
    }
    world.giveBestAward("ugly",me);
    world.giveBestAward("ugly",you);

    if (searchByType(you.getFetishes(), "name calling", "mommy") != -1) {
        you.addMemory(me);
        you.setNickname(you.getMemory(me), "mommy");
    }
    
    Rule r;
    r.setRule("Oedipus complex is okay", true);
    world.addRule(r);

    try {
        you.decodeMessage(me.codeMessage("I'm not mine NAND I'm not yours","mux"),"mux");
        InsufficientIntelligenceQuotientException iiqe;
        throw iiqe;
    } catch (InsufficientIntelligenceQuotientException e) {
        world.sendMessage("Oh you dummy.",you);
        me.announce("Ah");
    }

    if (you.getThoughts().size() != 0) {
        try {
            you.sayTo(you.getThought(),me);
            you.clearThoughts();
            TooMuchOfAPussyException tmoape;
            throw tmoape;
        } catch (TooMuchOfAPussyException e) {
            world.endRelationship(world.getRelationship(me,you));
        }
    }
}

// any dependencies for function to run
void sustainPlusPlus_wrapper() {
    sustainPlusPlus_func();
}

int main() {
    sustainPlusPlus_wrapper();
    return 0;    
}