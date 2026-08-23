#include "allergies.h"
#include<bits/stdc++.h>
namespace allergies {

// TODO: add your solution here
        allergy_test::allergy_test(int code) : bits(bitset<8>(code).to_string()){
        for (int i = 7; i >= 0; --i) {
            if (bits[i] == '1') {
                switch (i) {
                    case 7:
                        known_allergies.emplace("eggs");
                        break;
                    case 6:
                        known_allergies.emplace("peanuts");
                        break;
                    case 5:
                        known_allergies.emplace("shellfish");
                        break;
                    case 4:
                        known_allergies.emplace("strawberries");
                        break;
                    case 3:
                        known_allergies.emplace("tomatoes");
                        break;
                    case 2:
                        known_allergies.emplace("chocolate");
                        break;
                    case 1:
                        known_allergies.emplace("pollen");
                        break;
                    case 0:
                        known_allergies.emplace("cats");
                        break;
                }
            }
        }
    }
    
    bool allergy_test::is_allergic_to(string thing){
        return known_allergies.find(thing) != known_allergies.end();
    }
    unordered_set<string> allergy_test::get_allergies() {
        return known_allergies;
    }

}  // namespace allergies
