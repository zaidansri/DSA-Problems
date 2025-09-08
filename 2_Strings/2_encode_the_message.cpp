#include <bits/stdc++.h> 
string encode(string &message)
{
    //   Write your code here.
    int n = message.size();
    char ch = message[0];
    int c=0;
    string a;
    for(int i=0;i<n;i++){
        if(message[i]==ch){
            c++;
        }
        else{
            a.push_back(ch);
            a += to_string(c);
            ch = message[i];
            c = 1;
        }
    }
    a.push_back(ch);
    a += to_string(c);
    return a;
}