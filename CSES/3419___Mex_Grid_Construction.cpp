#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    ll n;
    cin >> n;
 
    vector<vector<ll>> m(n, vector<ll>(n));
 
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            m[i][j] = (i^j); 
        }
    }
 
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            cout << m[i][j] << ' ';
        }
        cout << '\n';
    }
 
    return 0;
}