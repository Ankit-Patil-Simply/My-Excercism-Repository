#include "hexadecimal.h"
#include<bits/stdc++.h>
using namespace std;
namespace hexadecimal {

// TODO: add your solution here
    int convert(string str){
        for(char c : str){
            if((c >= 48 and c <= 57) or (c >= 97 and c <= 102)) continue;
            else return 0;
        }
        int result{};
        map<char, int> m = {{'a', 10}, {'b', 11}, {'c', 12}, {'d', 13}, {'e', 14}, {'f', 15}};
        for(int i = str.length() - 1, j = 0; i >= 0; i--){
            if(str.at(i) >= 97 and str.at(i) <= 102) result += m.at(str.at(i)) * pow(16, j++);
            else result += (str.at(i) - '0') * pow(16, j++);
        }
        return result;
    }   
}  // namespace hexadecimal