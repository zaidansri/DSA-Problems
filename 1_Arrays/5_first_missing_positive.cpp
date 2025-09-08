#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{
    // Write your code here.
    sort (arr, arr+n);
    int missing = 1;

    for(int i = 0; i<n; i++){
        if (arr[i]>0 ){
           if (arr[i] == missing){
               missing++;
           }
           else if (arr[i]> missing){
               return missing;
           }
        }
    }
    return missing;
}