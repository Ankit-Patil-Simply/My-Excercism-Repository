#include "luhn.h"
#include<bits/stdc++.h>
#include<map>
using namespace std;
namespace luhn {

// TODO: add your solution here
    bool valid(string str){
        map <char, int> m = {{'0', 0}, {'1', 1}, {'2', 2}, {'3', 3}, 
        {'4', 4}, {'5', 5}, {'6', 6}, {'7', 7}, {'8', 8}, {'9', 9}};
        string newstr{};
        for(char c : str) {
            if(c == 32) continue;
            if(c > 47 and c < 58) newstr += c;
            else return false;
        }
        if(newstr.length() < 2) return false;
        bool pos = true;
        int sum{0};
        for(int i = newstr.length() - 1; i > -1; i--){
            if(pos) {
                sum += m.at(newstr.at(i));
                pos = false;
            }
            else{
                int temp = m.at(newstr.at(i)) * 2;
                if(temp > 9) newstr.replace(i, 1, to_string(temp - 9));
                else newstr.replace(i, 1, to_string(temp));
                sum += m.at(newstr.at(i));
                pos = true;       
            }
        }
        if (!(sum % 10)) return true;
        return false;
    }
}  // namespace luhn
