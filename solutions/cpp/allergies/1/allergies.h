#pragma once
#include<bits/stdc++.h>
using namespace std;
namespace allergies {

// TODO: add your solution here
    struct allergy_test {
    string bits;
    unordered_set<string> known_allergies;
    allergy_test(int code);
    
    bool is_allergic_to(string thing);
    unordered_set<string> get_allergies();
};

}  // namespace allergies
