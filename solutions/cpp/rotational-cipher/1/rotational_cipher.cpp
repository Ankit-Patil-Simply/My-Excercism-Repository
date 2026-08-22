#include "rotational_cipher.h"
#include<bits/stdc++.h>
using namespace std;
namespace rotational_cipher {

// TODO: add your solution here
    string rotate(string str, int by){
        string result{};
        for(char c : str){
            if(c >= 65 and c <= 90) {
                if(c + by > 90) {
                    c = c + by - 90 + 65 - 1;
                    result += c;
                }
                else result += c + by;
            }
            else if (c >= 97 and c <= 122) {
                if(c + by > 122) {
                    c = c + by - 122 + 97 - 1;
                    result += c;
                }
                else result += c + by;
            }
            else result += c;
        }
        return result;
    }
}  // namespace rotational_cipher
