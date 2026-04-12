#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define mp make_pair
 
#define M 1000000007
#define N 1000001
 
ll exp(ll a, ll e){
    ll ans = 1;
    while(e > 0){
        if(e&1) ans = ans * a % M;
        a = a * a % M;
        e >>= 1;
    }
    return ans;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    vector<ll> fat(N, 1);
    vector<ll> fat_inv(N, 1);
 
    for(ll i = 2; i < N; i++){
        fat[i] = fat[i-1]*i % M;
        fat_inv[i] = exp(fat[i], M-2);
    }
 
    ll t;
    cin >> t;
 
    while(t--){
        ll a, b;
        cin >> a >> b;
 
        ll x = fat_inv[a-b] * fat_inv[b] % M;
        ll y = fat[a];
 
        cout << (x*y)%M << '\n';
    }
  
    return 0;
}