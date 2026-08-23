// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#include "doctor_data.h"
heaven::Vessel::Vessel(std::string name, int generation, star_map::System current_system) : name(name), generation(generation), current_system(current_system) {}
heaven::Vessel heaven::Vessel::replicate(std::string new_name){
    return heaven::Vessel (new_name, generation+1);
}
void heaven::Vessel::make_buster(){
    busters++;
}
bool heaven::Vessel::shoot_buster(){
    if(busters){
        busters--;
        return true;
    }
    return false;
}
std::string heaven::get_older_bob(const Vessel& vessel1, const Vessel& vessel2){
    return vessel1.generation < vessel2.generation ? vessel1.name : vessel2.name;
}
bool heaven::in_the_same_system(const Vessel& vessel1, const Vessel& vessel2){
    return vessel1.current_system == vessel2.current_system;
}