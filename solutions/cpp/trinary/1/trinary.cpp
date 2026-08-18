#include "trinary.h"
#include<bits/stdc++.h>
using namespace std;
namespace trinary {

    bool isIntegerString(const std::string& str) {
    if (str.empty()) return false;
    
    // Checks if every single character is a digit
    return std::all_of(str.begin(), str.end(), [](unsigned char c) {
        return std::isdigit(c);
    });
}
// TODO: add your solution here
    int to_decimal(string str){
        if(!isIntegerString(str)) return 0;
        int temp = stoi(str);
        int result{};
        size_t i = 0;
        while( i < str.length()){
            
            result +=  (temp % 10) * pow(3, i);
            temp /= 10;
            i++;
        }
        return result;
    }

}  // namespace trinary
