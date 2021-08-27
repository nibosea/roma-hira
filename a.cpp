#include <bits/stdc++.h>

using namespace std;
#define For(i, a, b) for (int i = (a); i < (b); ++i)
#define rep(i, n) For(i, 0, n)
//Write From this Line
map<string, string> mp;
void makemp();
int main()
{
	makemp();
	string text;
	cin >> text;
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

void makemp(){
mp["a"] = "あ";
mp["i"] = "い";
mp["u"] = "う";
mp["e"] = "え";
mp["o"] = "お";
mp["ka"] = "か";
mp["ki"] = "き";
mp["ku"] = "く";
mp["ke"] = "け";
mp["ko"] = "こ";
mp["sa"] = "さ";
mp["si"] = "し"; 
mp["su"] = "す";
mp["se"] = "せ";
mp["so"] = "そ";
mp["ta"] = "た";
mp["ti"] = "ち";
mp["tu"] = "つ";
mp["te"] = "て";
mp["to"] = "と";
mp["na"] = "な";
mp["ni"] = "に";
mp["nu"] = "ぬ";
mp["ne"] = "ね";
mp["no"] = "の";
mp["ha"] = "は";
mp["hi"] = "ひ";
mp["hu"] = "ふ";
mp["he"] = "へ";
mp["ho"] = "ほ";
mp["ma"] = "ま";
mp["mi"] = "み";
mp["mu"] = "む";
mp["me"] = "め"; 
mp["mo"] = "も";
mp["ya"] = "や";
mp["yi"] = "い";
mp["yu"] = "ゆ";
mp["ye"] = "いぇ";
mp["yo"] = "よ";
mp["ra"] = "ら";
mp["ri"] = "り";
mp["ru"] = "る";
mp["re"] = "れ";
mp["ro"] = "ろ";
mp["wa"] = "わ";
mp["wi"] = "うぃ";
mp["wu"] = "う";
mp["we"] = "うぇ";
mp["wo"] = "を";
mp["nn"] = "ん";
mp["pa"] = "ぱ";
mp["pi"] = "ぴ";
mp["pu"] = "ぷ";
mp["pe"] = "ぺ";
mp["po"] = "ぽ";
mp["ba"] = "ば";
mp["bi"] = "び";
mp["bu"] = "ぶ";
mp["be"] = "べ";
mp["bo"] = "ぼ";
mp["da"] = "だ";
mp["di"] = "ぢ";
mp["du"] = "づ";
mp["de"] = "で";
mp["do"] = "ど";
mp["ga"] = "が";
mp["gi"] = "ぎ";
mp["gu"] = "ぐ";
mp["ge"] = "げ";
mp["go"] = "ご";
}