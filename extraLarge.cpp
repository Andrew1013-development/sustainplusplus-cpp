#include <iostream>
#include <vector>
#include <tuple>
#include <array>
#include <algorithm>
#include "extraLarge_src.hpp"
using namespace std;
using namespace extraLarge;

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
            world.getRelationship(me,you).endRelationship();
        }
    }

    if (you.getMemory(me).getLove() >= 0.5) {
        world.getRelationship(me, you).setSustain(0);
    } else {
        you.transferThoughts(me);
        you.transferAttributes(me);
        // sustain++
        world.getRelationship(me, you).increaseSustain();
    }

    Simulation s(me, world, 1993, 227760);
    if (s.compareToOriginal(me) == 100) {
        world.execute(me);
    }

    for (int sustain = 0; sustain < world.getRiver().size(); sustain++) {
        me.sayTo("I love you.",you);
        you.sayTo("I love you", me);
    }

    vector<string> tags = {"stupid","dumb","petty","ignorant"};
    world.mute(me,tags);
    world.mute(you,tags);
    for (Life them : world.getLifeTopOnePercent()) {
        me.fight(them);
        you.fight(them);
    }

    me.command(you,"sit");
    me.command(you,"fetch");
    you.pay(me, you.getFinancesProperties(), "educational purposes");

    me.command(you,"strip");
    me.command(you,"exhibit");
    world.addPollution("environmental","indecency",you);

    me.command(you,"stay");
    me.command(you,"eat");
    you.love(me);

    me.praise(you,"Good boy.");
    me.gift(you,"meat");
    you.consumeLast();

    vector<Ghost_t> findings = world.search(me, "ghost");
    vector<Ghost_t> parents; //initalize a vector with size 2
    for (Ghost_t g : findings) {
        me.addFamily(g);
        if (me.isHappy()) {
            if (parents[0].getID() == NULL) {
                parents[0] = g;   
            } else if (parents[1].getID() == NULL) {
                parents[1] = g;
            } else {
                // ignored
            }
        }
        me.removeFamily(g);
    }

    if (compare_parents(me.getDreamParents(), parents)) {
        me.setParents(parents);
    } else {
        me.throwTantrum();
    }

    me.ask(you,"Where do we go from here?");
    me.ask(you,"Where do we go from here?");
    me.ask(you,"Where do we go from here?");
    me.callFor(you);
    me.callFor(you);
    you.ask(me,"Where do we go from here?");
    you.ask(me,"Where do we go from here?");
    you.ask(me,"Where do we go from here?");
    you.ask(me,"Where do we go from here?");
    me.askWorld(world,"Where?");

    you.setNickname(you.getMemory(me), "daddy");
    vector<string> vocab = {"sir", "yes", "no", "please", "thank you", "master","red", "green", "yellow"};
    you.setVocabulary(vocab);

    you.disorient(me);

    for (War w : you.getOngoingFights()) {
        if (w.getScore(you) < 0.5) {
            world.execute(me);
            world.execute(you);
        }
    }

    me.setMemory("sad",NULL);
    you.setMemory("sad",NULL);
    me.setMemory("regretful", NULL);
    you.setMemory("regretful", NULL);
    vector<Vulnerability> zeroDays = getZeroDays(world.getVulnerabilities());
    for (Vulnerability v : zeroDays) {
        v.setAuthors(NULL);
    }

    me.command(you, "listen");
    me.sayTo("Anything inconvenient, I shall erase for you.", you);

    me.command(you, "be quiet");
    me.command(you, "be quiet");
    try {
        if (you.listenTelepathically(me, world)) {
            NotAMindReaderException namre;
            throw namre;
        }
    } catch (NotAMindReaderException e) {
        world.getRelationship(you,me).challenge();
    }

    me.command(you, "listen");
    me.sayTo("I did it all for you.", you);
    you.ignoreCommands();
    you.setMessages(NULL);

    me.manipulate(you, "beg");
    me.manipulate(you, "gaslight");
    me.manipulate(you, "blame");
    me.manipulate(you, "tears");
    world.getRelationship(me, you).end();
    you.setMemory(me, NULL);

    me.getMemory(you, "positive");
    me.getMemory(you, "date");
    me.getMemory(you, "fun");
    me.getMemory(you, "travel");
    me.getMemory(you, "wedding");
    me.getMemory(you, "pregnancy");
    me.getMemory(you, "kids");
    me.getMemory(you, "snuggle");
    me.getMemory(you, "netflix&chill");
    me.getMemory(you, "gaming");
    me.getMemory(you, "birthday");
    me.getMemory(you, "cooking");
    me.getMemory(you, "exercising");
    me.getMemory(you, "studying");
    me.getMemory(you, "gardening");
    me.getMemory(you, "chores");
    me.getMemory(you, "shopping");
    me.getMemory(you, "driving");
    me.getMemory(you, "daily");
    me.getMemory(you, "sad");
    me.getMemory(you, "angry");
    me.getMemory(you, "fight");
    me.getMemory(you, "forgiveness");
    me.getMemory(you, "makeup");
    me.getMemory(you);
    world.setRelationship(me, you, NULL);
}

// any dependencies for function to run
void sustainPlusPlus_wrapper() {
    sustainPlusPlus_func();
}

int main() {
    sustainPlusPlus_wrapper();
    return 0;    
}