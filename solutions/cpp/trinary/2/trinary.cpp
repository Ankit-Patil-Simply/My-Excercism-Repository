#include "trinary.h"
#include<bits/stdc++.h>
using namespace std;
namespace trinary {
// TODO: add your solution here
    int to_decimal(string str){
        for(char c: str){
            if(c < '0' or c > '9') return 0;
        }
        int temp = stoi(str);
        int result{};
        size_t i = 0;
        while( i < str.length()){           
            result +=  (temp % 10) * pow(3, i);
            temp /= 10;
            i++;
        }
        return result;
    }

}  // namespace trinary
