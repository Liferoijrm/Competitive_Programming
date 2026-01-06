#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, t;
    cin >> n;

    vector<ll> v(n);

    for(ll i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    cin >> t;
    while(t--){
        ll q;
        cin >> q;

        auto it = upper_bound(v.begin(), v.end(), q);

        if(it == v.end()) cout << n << '\n';
        else cout << it - v.begin() << '\n';
    }

    return 0;
}