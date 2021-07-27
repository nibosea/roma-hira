#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;
typedef pair<ll, ll> P;
#define SORT(a) sort((a).begin(), (a).end())
#define REV(a) reverse((a).begin(), (a).end())
#define For(i, a, b) for (int i = (a); i < (b); ++i)
#define rep(i, n) For(i, 0, n)
#define debug(x) cerr << #x << " = " << (x) << endl;
template <class T>
inline bool chmin(T &a, T b)
{
	if (a > b)
	{
		a = b;
		return true;
	}
	return false;
}
template <class T>
inline bool chmax(T &a, T b)
{
	if (a < b)
	{
		a = b;
		return true;
	}
	return false;
}

void coY() { cout << "Yes" << endl; }
void coN() { cout << "No" << endl; }
void mswap(ll &a, ll &b)
{
	if (a >= b)
		swap(a, b);
}
void rswap(ll &a, ll &b)
{
	if (a <= b)
		swap(a, b);
}

const int dy[] = {0, 0, 1, -1};
const int dx[] = {1, -1, 0, 0};
const ll mod = 1e9 + 7;
const ll MOD = 998244353;
const double PI = 3.14159265358979323846;
const int inf = 1001001001;
const ll INF = 1'000'000'000'000'000'000;
//Write From this Line
int main()
{
	string hiragana[5] = { "あ", "い", "う", "え", "お" };
	char check[5] = { 'a', 'i', 'u', 'e', 'o' };
	string now = "aiueoaioueouaiou";
	int n = now.size();
	rep(i, n)
	{
		rep(j, 5)
		{
			if (now[i] == check[j])
			{
				cout << hiragana[j];
			}
		}
	}
	cout << endl;
}