#include <bits/stdc++.h>
#define ll long long 
using namespace std;
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n, pairs = 0;
        cin >> n;
        vector<ll> v(n);
        map<ll, ll> hm;
        map<ll, ll> sum_map;

        for(ll i = 0; i < n; i++){
            cin >> v[i];
        }
        for(ll i = 0; i < n; i++){
            sum_map[v[i] - i]+=hm[v[i] - i];
            hm[v[i] - i]++;
        }
        for(const auto& par : sum_map){
            pairs+=par.second;
        }
        cout << pairs << '\n';
    }
 
    return 0;
}
