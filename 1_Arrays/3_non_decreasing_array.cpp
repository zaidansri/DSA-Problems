#include <bits/stdc++.h> 
bool isPossible(int *nums, int n)
{
    //  Write your code here.
    int pos = -1;
        
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                if(pos!=-1){
                    return false;
                }
                pos=i;
            }
        }
        
        return pos==-1 || pos==0 || pos == n-2 || nums[pos-1]<=nums[pos+1] || nums[pos]<=nums[pos+2];
}