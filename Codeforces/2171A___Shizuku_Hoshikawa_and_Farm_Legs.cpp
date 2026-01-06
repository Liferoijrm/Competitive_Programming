#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vl vector<ll>
 
ll numberOfLegs(ll x, ll y){
    return 2*x + 4*y;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    ll t;
    cin >> t;
 
    while(t--){
        ll n, count = 0;
        cin >> n;
 
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                if(numberOfLegs(i, j) == n) count++;
            }
        }
 
        cout << count << '\n';
    }
 
    return 0;
}