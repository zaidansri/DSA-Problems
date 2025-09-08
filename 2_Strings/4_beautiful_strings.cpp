#include <bits/stdc++.h>
string generate (int n, bool zero) {
	string ans = "";
	if (n==0) 	return (ans);

	if (zero)	{
		ans += '0'; n--;
	}
	else {
		ans += '1'; n--;
	}
	while (n){
		char temp;
		
		if (ans[ans.size()-1] == '0')  temp = '1';
		else temp = '0';
		
		ans += temp;
		n--;
	}
	return (ans);
}
int change (string str, string s, int n) {
	int a = 0;
	for (int i = 0; i<n ;i++){
		if (str[i] != s[i])	
		a++;
	}
	return a;
}

int makeBeautiful(string str) {
	// Write your code here
	int n = str.size();

	string g1 = generate(n, true);
	int diff1 = change (str, g1, n);

	string g2 = generate(n, false);
	int diff2 = change (str, g2, n);

	return min(diff1, diff2);
}




