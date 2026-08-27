#include "lasagna_master.h"
#include<bits/stdc++.h>
using namespace std;
namespace lasagna_master {

// TODO: add your solution here
    int preparationTime(vector<string> layers, int time){
        return layers.size() * time;
    }
    
    amount quantities(vector<string> layers){
        amount requirements {0, 0};
        for(size_t i = 0; i < layers.size(); i++){
            if(layers.at(i) == "noodles")  requirements.noodles += 50;
            if(layers.at(i) == "sauce") requirements.sauce +=0.2;
        }
        return requirements;
    }

    void addSecretIngredient(vector<string> &myList, const vector<string> &friendsList){
        for(size_t i = 0; i < myList.size(); i++){
            if(myList.at(i) == "?") myList.at(i) = friendsList.back();
        }
    }

   vector<double> scaleRecipe(const vector<double> &recipe, int portions){
    	double scaleFactor = portions / 2.0;
    	vector<double> newRecipe;
    	for(double n : recipe){
    		newRecipe.push_back(n*scaleFactor);
    	}
    	return newRecipe;
    }

    void addSecretIngredient(vector<string> &myRecipe, const string &lastIngredient){
    	myRecipe.back() = lastIngredient;
    }
    
}  // namespace lasagna_master
