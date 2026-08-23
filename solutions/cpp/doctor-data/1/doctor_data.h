// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#pragma once
#include <string>
namespace star_map{
    enum class System {
        Sol,
        BetaHydri,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
}
namespace heaven {
    class Vessel {
        public:
            std::string name{};
            int generation{};
            star_map::System current_system{};
            int busters{0};
            Vessel(std::string name, int generation, star_map::System current_system = star_map::System::Sol);
            Vessel replicate(std::string new_name);
            void make_buster();
            bool shoot_buster();
            };
    std::string get_older_bob(const Vessel& vessel1, const Vessel& vessel2);
    bool in_the_same_system(const Vessel& vessel1, const Vessel& vessel2);
}