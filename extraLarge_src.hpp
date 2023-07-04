//#include "GodDrinksCPP_src.hpp"
#include <string>
#include <vector>

namespace extraLarge {
    // extended class functions
    
    // new classes
    class Life {
        private:
            // initial parameters
            
            // song parameters

            // support parameters
        public:
            // song functions
            void Ghost();

    };
    class Rule {
        private:
            // initial parameters
            std::string rule_name;
            bool rule_enforcement;

            // song parameters
            
            // support parameters
        public:
            // song functions
            void setRule(std::string name, bool enforcement);

            // support functions
    };
    
    class Simulation {
        private:
            std::vector<Life> simulation_lives;
            GodDrinksCPP::World simulation_world;
            int simulation_year;
            unsigned int whatever_num;
        public:
            // song simulation
            void setSimulation(Life life, GodDrinksCPP::World world, int year, unsigned int num);
    };
    
    class Vulnerability {

    };

    // support classes
    // base class
    class Exception {
        public:
            std::string exception_name;
    };
    //derived class
    class InsufficientIntelligenceQuotientException : public Exception {
        public:
            std::string exception_name = "Insufficient IQ";
    };

    class TooMuchOfAPussyException : public Exception {
        public:
            std::string exception_name = "Too much of a pussy";
    };
}