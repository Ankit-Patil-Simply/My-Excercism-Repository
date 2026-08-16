#include "power_of_troy.h"

namespace troy {
    
    void give_new_artifact(human& name, std::string new_power){
        name.possession = std::make_unique<artifact>(new_power);
    }

    void exchange_artifacts(std::unique_ptr<artifact>& artifact1, std::unique_ptr<artifact>& artifact2){
        std::swap(artifact1, artifact2);
    }

    void manifest_power(human& name, std::string new_power){
        name.own_power = std::make_shared<power>(new_power);
    }

    void use_power(human& caster, human& target){
        target.influenced_by = caster.own_power;
    }

    int power_intensity(const human& name){
        if(name.own_power){
            return name.own_power.use_count();
        }
        return 0;
    }
}  // namespace troy
