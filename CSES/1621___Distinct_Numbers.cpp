#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pll = pair<ll,ll>;
using vl = vector<ll>;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define dbg(x) cerr << #x << " = " << (x) << endl;

void solve(){

    ll n, qtd = 1;
    cin >> n;
    vector<ll> v(n);

    for(ll i = 0; i < n; i++)
        cin >> v[i];

    sort(all(v));

    for(ll i = 1; i < n; i++)
        if(v[i] != v[i-1]) qtd++;
        
    cout << qtd << endl;
}

int main() { fastio

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}