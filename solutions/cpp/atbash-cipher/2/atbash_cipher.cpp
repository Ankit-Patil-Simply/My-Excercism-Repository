#include "atbash_cipher.h"
#include <bits/stdc++.h>
using namespace std;
namespace atbash_cipher {

// TODO: add your solution here
    string plain =  "abcdefghijklmnopqrstuvwxyz";
    string cipher = "zyxwvutsrqponmlkjihgfedcba";
    string encode(string str){
        string result{};
        int count = 0;
        for(char c : str){
            if(c == 32)continue;
            if(tolower(c) > 96) result += cipher.at(plain.find(tolower(c)));
            else if(c == 44 or c == 46) continue;
            else result += c;
            count++;
            if (count == 5 and str.find(c) != str.length() - 2) {
                result += " ";
                count = 0;
            }
        }
        return result;
    }

    string decode(string str){
        string result{};
        for(char c : str){
            if(c == 32)continue;
            if(tolower(c) > 96) {
                result += plain.at(cipher.find(tolower(c)));
                continue;
            }
            result += c;
        }
        return result;
    }

}  // namespace atbash_cipher
