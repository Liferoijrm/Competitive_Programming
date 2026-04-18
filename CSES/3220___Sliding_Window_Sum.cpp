#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

int main(){ fastio;

    ll n, k;
    cin >> n >> k;
    ll x, a, b, c;
    cin >> x >> a >> b >> c;

    vector<ll> v;
    ll window = 0;
    vector<ll> windows;

    for(ll i = 0; i < n; i++){
        v.pb(x);
        if(i < k) window+=x;
        x = (a*x + b) % c;
    }

    windows.pb(window);

    ll i = 1;
    while(i+k-1 < n){
        ll aux = windows[i-1] - v[i-1] + v[i+k-1];
        windows.pb(aux);
        i++;
    }

    ll ans = window;
    for(ll i = 1; i < windows.size(); i++){
        ans = (windows[i]^ans);
    }

    cout << ans << endl;

    return 0;
}
