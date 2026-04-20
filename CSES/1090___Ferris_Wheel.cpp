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

    ll n, x, qtd = 0;
    cin >> n >> x;
    vector<ll> v(n);

    for(ll i = 0; i < n; i++)
        cin >> v[i];

    sort(all(v));

    ll least = 0;
    for(ll i = n-1; i >= 0; i--){
        ll child = v[i];
        qtd++;
        if(child+v[least] <= x && least < i){
            least++;
        }
        if(least == i) break;
    }

    cout << qtd << endl;
}

int main() { fastio

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}