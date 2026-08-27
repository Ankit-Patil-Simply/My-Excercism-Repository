#pragma once
#include<bits/stdc++.h>
using namespace std;
namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};
    void addSecretIngredient(vector<string> &myRecipe, const string &lastIngredient);

    vector<double> scaleRecipe(const vector<double> &recipe, int portions);
    int preparationTime(vector<string> layers, int time = 2);
    amount quantities(vector<string> layers);
    void addSecretIngredient(vector<string> &myList, const vector<string> &friendsList);

}  // namespace lasagna_master
