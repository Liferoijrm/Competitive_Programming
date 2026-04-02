#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n, k, a, profit = 0;
        cin >> n >> k;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++)
            cin >> v[i];
            
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
            
        for(ll i = 0; i < n; i++){
            if(i < k)
                a = v[i] - 5;
            else
                a = v[i] - 10;

            if(a > 0)
                profit += a;
        }
        cout << profit << "\n";
    }

    return 0;
}