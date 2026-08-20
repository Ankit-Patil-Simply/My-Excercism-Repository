#include "bob.h"
#include<bits/stdc++.h>
using namespace std;
        // bool haveletter=false;
        // for(char c: str){
        //     if(isalpha(c)) {
        //         haveletter=true;
        //     if(!isupper(c)) isCap=false;
        //     newstr += c;
        //     }
        //     else if(isdigit(c)){
        //     haveletter=true;
        //     newstr += c;
        //     }
        //     else if(c=='?') newstr+=c;
        // }
        // if(newstr.at(newstr.length()-1)=='?') citation=true;

// TODO: add your solution here
 // string hey(string str){
 //        bool isCap = true;
 //        bool citation = false;
 //        // for(char c : str)
 //        for(size_t i= 0; i < str.length() - 1; i++){
 //            if(str.at(i) == 32) continue;
 //            if(str.at(i) < 65 or str.at(i) > 90) {
 //                isCap = false; 
 //                break;
 //            }
 //        }
 //        if (str.at(str.length() - 1) == 63) citation = true;
     
 //        if (isCap and citation) return "Calm down, I know what I'm doing!" ;
 //        else if (str.at(str.length() - 1) == '?')return "Sure.";
 //        else if (isCap) return "Whoa, chill out!";
 //        else if(!str.length()) return "Fine. Be that way!";
 //        else return "Whatever.";
 //    }
namespace bob {
    string hey(string text) {
    bool is_empty{true};
    bool is_alpha{false};
    bool is_lower{false};
    bool is_question{false};
    for (auto it = text.rbegin(); it != text.rend(); ++it) {
        if (!isspace(*it)) {
            is_empty = false;
            if (isalpha(*it)) {
                is_alpha = true;
                if (islower(*it)) {
                    is_lower = true;
                }
            } else if (text.back() == '?') {
                is_question = true;
            }
        } else {
            text.pop_back();
        }
    }
    if (is_empty) {
        return "Fine. Be that way!";
    } else if (is_alpha && !is_lower && is_question) {
        return "Calm down, I know what I'm doing!";
    } else if (is_alpha && !is_lower) {
        return "Whoa, chill out!";
    } else if (is_question) {
        return "Sure.";
    }
    return "Whatever.";
    }
}  // namespace bob
