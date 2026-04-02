#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

vector<ll> ps;

ll psum(ll i, ll j){
    if(i < 0) 
        return ps[j];
    return ps[j] - ps[i];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);

    for(ll i = 0; i < n; i++)
        cin >> v[i];

    for(ll i = 0; i < n; i++){
        if(i == 0) 
            ps.pb(v[i]);
        else
            ps.pb(ps[i-1] + v[i]);
    }

    ll min = LLONG_MAX, min_idx = 0;
    for(ll i = 0; i < n-k+1; i++){
        ll sum = psum(i-1, i+k-1);
        if(sum < min){
            min = sum;
            min_idx = i;
        }
    }

    cout << min_idx + 1 << '\n';
  
    return 0;
}