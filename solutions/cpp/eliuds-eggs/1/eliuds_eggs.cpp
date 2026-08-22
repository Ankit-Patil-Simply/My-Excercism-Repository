#include "eliuds_eggs.h"
#include<bits/stdc++.h>
using namespace std;
namespace chicken_coop {

// TODO: add your solution here
    int positions_to_quantity(int num){
        int count{0};
        while(num > 0){
            if(num % 2 == 1) count++;
            num /= 2;
        }
        return count;
    }

}  // namespace chicken_coop
