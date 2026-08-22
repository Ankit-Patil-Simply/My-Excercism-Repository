#include "matching_brackets.h"
#include<bits/stdc++.h>
using namespace std;
namespace matching_brackets {

// TODO: add your solution here
    bool check(string str){   
        stack<char> st;
        for(size_t i = 0; i < str.length(); i++){
            if(str.at(i) == '{' or str.at(i) == '[' or str.at(i) == '(') st.push(str.at(i));
            if(str.at(i) != '}' && str.at(i) != ']' && str.at(i) != ')')                                 continue;
            else if (!st.empty() and
         ((st.top() == '(' and str.at(i) == ')') or
          (st.top() == '[' and str.at(i) == ']') or
          (st.top() == '{' and str.at(i) == '}')))
{
    st.pop();
}
            else 
            return false;
    }
        if(st.empty()) return true;
        else 
            return false;
    }
}  // namespace matching_brackets
