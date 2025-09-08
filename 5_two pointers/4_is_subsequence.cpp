#include <bits/stdc++.h> 
bool isSubSequence(string str1, string str2) {
    // Write your code here.
    int j = 0;
    for (int i = 0; i<str2.size(); i++){
        if (str2[i] == str1[j])
            j++;
    }
    if (j == str1.size())   return true;
    else return false;
}
