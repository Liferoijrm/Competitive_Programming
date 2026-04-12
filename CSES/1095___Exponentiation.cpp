#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define mp make_pair
 
#define M 1000000007
 
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
 
    ll t;
    cin >> t;
 
    while(t--){
        ll a, b;
        cin >> a >> b;
        cout << exp(a, b) << '\n';
    }
  
    return 0;
}