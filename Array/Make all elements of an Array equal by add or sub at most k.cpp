// Problem link: --->
// https://www.geeksforgeeks.org/make-all-elements-of-an-array-equal-by-adding-or-subtracting-at-most-k/
/*************************************************************************************************************/

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

int find_ans(vi &v, const int n, const int k) {
	int min = *min_element(v.begin(), v.end());
	int d = min + k;
	
	bool ok = 1;
	for(int i = 0; i < n; i++) {
		if(!(k >= v[i] - d and k <= v[i] + d)) {
			ok = 0;
			break;
		}
	}
	
	if(ok) return d;
	return -1;
}

void solve()
{
  	int n, k; cin >> n >> k;
  	vi v(n);
  	for(auto &x: v) cin >> x;
  	
  	cout << find_ans(v, n, k) << "\n";
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
    // cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}