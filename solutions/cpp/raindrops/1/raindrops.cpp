#include "raindrops.h"
#include <string>

namespace raindrops {

// TODO: add your solution here
    std::string convert(int n){
        std::string result{};
        if(! (n % 3)){result += "Pling";}
        if(! (n % 5)) {result += "Plang";}
        if(! (n % 7)) {result += "Plong";}
        if ( (n % 3) and (n % 5) and (n % 7)) {
            result = std::to_string(n);
        }
        return result;
    }

}  // namespace raindrops