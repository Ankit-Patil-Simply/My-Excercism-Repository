#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:
bool connection_check(pillar_men_sensor* sensor){
    return sensor;
}

int activity_counter(pillar_men_sensor* sensor_array, int size){
    int total{0};
    for(int i = 0; i < size; i++){
        total += (sensor_array + i) -> activity;
    }
    return total;
}

bool alarm_control(pillar_men_sensor* sensor){
    return connection_check(sensor) and sensor-> activity;
}

bool uv_alarm(pillar_men_sensor* sensor){
    return (connection_check(sensor) and uv_light_heuristic(&sensor -> data) > sensor -> activity);
}

// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

}  // namespace speedywagon
