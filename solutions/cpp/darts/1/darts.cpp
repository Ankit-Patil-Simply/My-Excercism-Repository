#include "darts.h"
#include<cmath>
namespace darts {

// TODO: add your solution here
    int score(float x, float y){
        double d = std::sqrt(x * x + y * y);
        if (d <= 1) {return 10;}
        else if (d <= 5){return 5;}
        else if (d <= 10) {return 1;}
        return 0;
    }

}  // namespace darts
