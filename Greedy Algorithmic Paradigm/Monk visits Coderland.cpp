// Problem: Monk visits Coderland
// Contest: HackerEarth
// URL: https://www.hackerearth.com/problem/algorithm/monk-visits-coderland-4-067f8fcf/description/
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Parsed on: 11-01-2021 23:50:56 IST (UTC+05:30)
// Author: kapil_choudhary

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define PI 3.1415926535897932384626
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << ", " << #y << "=" << y << endl
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int>	vi;
typedef vector<ll> vll;
typedef vector<ull> vull;
typedef vector<pii>	vpii;
typedef vector<pll>	vpll;
typedef vector<vi> vvi;
typedef vector<vll>	vvll;
typedef vector<vull> vvull;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
    uniform_int_distribution<int> uid(0,lim-1);
    return uid(rang);
}

const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;

void solve()
{
  	ll n; cin >> n;
  	vll cost(n), petrol(n);
  	for(ll i = 0; i < n; i++) cin >> cost[i];
  	for(ll i = 0; i < n; i++) cin >> petrol[i];
  	
  	ll res = cost[0] * petrol[0];
  	ll mn_cost = cost[0];
  	for(ll i = 1; i < n; i++) {
  		if(mn_cost > cost[i]) mn_cost = cost[i];
  		res += mn_cost * petrol[i];
  	}
  	
  	cout << res << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}