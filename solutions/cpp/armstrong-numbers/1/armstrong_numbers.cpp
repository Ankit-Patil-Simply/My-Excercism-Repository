#include "armstrong_numbers.h"
#include<bits/stdc++.h>
using namespace std;
namespace armstrong_numbers {

// TODO: add your solution here
    bool is_armstrong_number(int num){
        int count{0};
        int temp = num;
        int check{0};
        for(; temp > 0; temp /= 10)count++;
        temp = num;
        for(; temp > 0; temp /= 10) check += pow(temp % 10, count);
        return check == num;
    }

}  // namespace armstrong_numbers
