#include <bits/stdc++.h> 
int subArrayCount(vector<int> &arr, int k) {
    // Write your code here.
    vector <int> count(k,0);
    int sum = 0;
    for (int x:arr){
        sum += (x%k + k)%k;
        count [sum%k]++;
    }
    int res = count[0];
    for (int x: count){
        res += x *(x-1) /2;
    }
    return res;
}