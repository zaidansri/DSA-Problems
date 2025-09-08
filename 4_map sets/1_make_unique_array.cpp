#include <bits/stdc++.h> 
int minElementsToRemove(vector<int> &arr)
{
	// Write your code here.
	unordered_map <int, int> mp;

	for (int i = 0; i<arr.size(); i++){
		mp [arr [i]]++;
	}

	return arr.size() - mp.size();
}