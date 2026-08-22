#include "prime_factors.h"
#include<bits/stdc++.h>
using namespace std;
namespace prime_factors {

// TODO: add your solution here
    vector<long long int> of(long int num){
        vector<long long int> result{};
        long int i = 2;
        while (num > 1){
            if(num % i == 0) {
                result.emplace_back(i);
                num /= i;
            }
            else i++;
        }
        return result;
    }

}  // namespace prime_factors
