#include <bits/stdc++.h>
void spiralPrint(int **input, int r, int c)
{
    //Write your code here
    int left = 0;
    int right = c -1;
    int top = 0;
    int bottom = r-1;

    vector <int> ans;

    while (left <= right && top <= bottom) {
        for (int i = left; i <= right; i++){
            ans.push_back(input[top][i]);
        }
        top++;
        for (int i=top; i<=bottom; i++){
            ans.push_back (input [i][right]);
        }
        right--;
        if (bottom >= top){
            for (int i = right; i>=left; i--) {
                ans.push_back (input [bottom][i]);
            }
            bottom--;
        }
        if (right >= left) {
            for (int i = bottom; i>=top; i--) {
                ans.push_back (input [i][left]);
            }
            left++;
        }
    }
    for (auto x: ans){
        cout << x<< " ";
    }
}