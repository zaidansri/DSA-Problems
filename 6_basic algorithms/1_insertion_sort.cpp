#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    
    for (int i = 1; i<n; i++) {
        int value = arr[i];
        int hole = i;

        while (arr[hole-1]>value && hole > 0){
            arr[hole] = arr[hole - 1];
            hole--;
        }
        arr[hole] = value;
    }
}