#include "sieve.h"
#include<vector>
namespace sieve {

// TODO: add your solution here
    bool check_prime(int num){
        for(int i = 2; i < num / 2 + 1; i++){
            if (num % i == 0) {return false;}
        }
        return true;
    }
    std::vector<int> primes(int num){
        std::vector<int> result;
        for(int i = 2; i <= num; i++){
            if(check_prime(i)) {
                result.emplace_back(i);
            }
        }
        return result;
    }

}  // namespace sieve
