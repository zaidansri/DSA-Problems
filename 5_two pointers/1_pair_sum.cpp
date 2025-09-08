#include <bits/stdc++.h> 
int pairSum(vector<int> &arr, int n, int target){
	// Write your code here.
	int ans = 0;
	int left = 0, right = n-1;

	while (left < right){
		if (arr[left]+arr[right] == target){
			left++;
			right--;
			ans++;
		}
		else if (arr[left]+arr[right] > target) right--;
		else left++;
	}
	if (ans) return ans;
	else return -1;
}