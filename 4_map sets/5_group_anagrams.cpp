#include <bits/stdc++.h> 
vector<vector<string>> getGroupedAnagrams(vector<string> &s, int n)
{
    // Write your code here.
    unordered_map<string, vector<string>> mp;
    vector <vector<string > >result;

    for (int i =0; i< n; i++){
        string temp = s[i];
        sort(temp.begin(), temp.end());
        mp[temp].push_back(s[i]);
    }
    for (auto it : mp){
        result.push_back(it.second);
    }
    return result;
}
