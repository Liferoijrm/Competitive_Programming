#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll hasRemainder(ll n, ll k){
    if(n%k != 0) return 1;
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n, k;
        cin >> n >> k;

        if(n > k){
            ll x = (n+k-1)/k;
            k*=x;
        }

        ll result = k/n + 1*hasRemainder(k, n);
        cout << result << '\n';
    }

    return 0;
}