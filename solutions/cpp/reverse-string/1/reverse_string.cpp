#include "reverse_string.h"
#include <string>
namespace reverse_string {

// TODO: add your solution here
    std::string reverse_string(std::string str){
        std::string reverse{};
        for(int i = str.length() - 1; i >= 0; i--){
            reverse += str[i];
        }
        return reverse;
    }

}  // namespace reverse_string
