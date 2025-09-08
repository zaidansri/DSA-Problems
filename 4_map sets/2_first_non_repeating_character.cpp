#include <bits/stdc++.h> 
char firstNonRepeatingCharacter(string str) {

  // Write your code here
  unordered_map< char, int> mp;

  for (int i = 0; i<str.size(); i++) {
      mp[str[i]]++;
  }
  char ans = str[0];
  for (int i =0; i<str.size(); i++) {
      if (mp[str[i]] == 1) {
          ans = str[i];
          break;
      }
  }
  return ans;
}