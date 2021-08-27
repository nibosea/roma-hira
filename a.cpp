#include <bits/stdc++.h>

using namespace std;
#define For(i, a, b) for (int i = (a); i < (b); ++i)
#define rep(i, n) For(i, 0, n)
//Write From this Line
int main()
{
	string alp, hira;
	map<string,string> mp; // alp -> hira
	while(cin >> alp >> hira){
		mp[alp] = hira;
	}
	string text;
	text = "ootukahuutahakusai";
	int n = text.size(); 
	string now = "";
	string ans = "";
	rep(i,n){
		now += text[i];
		if(mp[now] != ""){
			ans += mp[now];
			now = "";
		} else if(text[i] < 'a' || 'z' < text[i]){
			// アルファベットじゃないならそのまま繋ぐ
			ans += now;
			now = "";
		}
	}
	cout << ans << endl;
}