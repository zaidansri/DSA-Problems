#include <bits/stdc++.h> 
bool isMatrixSymmetric(vector<vector<int>> matrix){
    // Write your code here. 
    int n = matrix.size();
    bool ans = true;

    for (int i = 0; i<n; i++){

        for (int j = 0; j<n; j++){

            if (matrix[i][j] != matrix[j][i]){
                ans = false;
                break;
            }
        }
    }
    return ans;
}