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

    ll n, m, k, qtd = 0;
    cin >> n >> m >> k;
    vector<ll> p(n);
    vector<ll> a(m);

    for(ll i = 0; i < n; i++)
        cin >> p[i];

    for(ll i = 0; i < m; i++)
        cin >> a[i];

    sort(all(p));
    sort(all(a));

    ll first = 0;
    for(ll i = 0; i < n; i++){
        for(ll j = first; j < m; j++){
            if(a[j] - p[i] < -k) first = j+1;
            if(abs(a[j]-p[i]) <= k){
                first = j+1;
                qtd++;
                break;
            }
            else if(a[j] - p[i] > k) break;
        }
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