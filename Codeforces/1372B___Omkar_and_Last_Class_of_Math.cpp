#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll smallestDivisor(ll n){
    for(ll i = 3; i*i <= n; i+=2){
        if(n%i == 0) return i;
    }
    return n;
}

void solve(){
    ll n;
    cin >> n;
    
    if(n%2 == 0) cout << n/2 << ' ' << n/2 << '\n';
    else{
        ll d = smallestDivisor(n);
        ll a = n/d;
        ll b = n-a;
        cout << a << ' ' << b << '\n';
    } 
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}