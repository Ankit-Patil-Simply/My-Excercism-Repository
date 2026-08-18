#include "protein_translation.h"
#include<bits/stdc++.h>
#include <map>
#include <vector>
#include <iostream>
using namespace std;
namespace protein_translation {

// TODO: add your solution here
    std::map <std::string, std::string> codons = {
    {"AUG", "Methionine"}, {"UUU", "Phenylalanine"}, {"UUC", "Phenylalanine"},
    {"UUA", "Leucine"}, {"UUG", "Leucine"}, {"UCU", "Serine"}, {"UCC", "Serine"}, 
    {"UCA", "Serine"}, {"UCG", "Serine"}, {"UAU", "Tyrosine"}, {"UAC", "Tyrosine"},
    {"UGU", "Cysteine"}, {"UGC", "Cysteine"}, {"UGG", "Tryptophan"}, {"UAA", "STOP"},
    {"UAG", "STOP"}, {"UGA", "STOP"}
    };
    std::vector<std::string> proteins(std::string str){
        std::vector<std::string> result{};
        // for(size_t i = 0; i < str.length(); i += 3){
        //     std::string temp{};
        //     int count = 0;
        //     for (size_t j = i; j < str.length() and count < 3; j++){
        //         temp += str[j];
        //         count++;
        //     }
        //     if(codons.at(temp) == "STOP"){return result;}
        //     result.emplace_back(codons.at(temp));
        // }
        string res="";
        for(size_t i=0;i<str.length();i++){
            if(res.length()<3){
                res.push_back(str[i]);
            }
            if(res.length()==3){
                if(codons.at(res) == "STOP")return result;
                result.emplace_back(codons.at(res));
                res.clear();
            }
        }
        return result;
    }

}  // namespace protein_translation
