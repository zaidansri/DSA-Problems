#include <bits/stdc++.h> 
void inplaceRotate(vector<vector<int>> &arr){
    // Write your code here.
    int n = arr.size();

    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            swap (arr[i][j], arr[j][i]);
        }
    }
    for (int i=0; i<n; i++) {
        int k = 0, l = n-1;
        while (k<l){
            swap (arr[k][i], arr[l][i]);
            k++;    l--;
        }
    }
}