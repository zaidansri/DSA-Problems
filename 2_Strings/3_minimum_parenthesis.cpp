#include <bits/stdc++.h> 
int minimumParentheses(string s) {
    // Write your code here.
    // pattern is the given string.
    int open = 0, close = 0;

    for(int i = 0; i < s.size(); i++) {
        
        if (s[i] == '(')    open++;
        else {
            if (open == 0)  close++;
            else open--;
        }
    }
    return open+close;

}