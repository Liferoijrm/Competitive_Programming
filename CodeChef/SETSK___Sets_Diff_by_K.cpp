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
        bool flag = false;
        ll n, k;
        cin >> n >> k;
        
        vector<ll> v(n);
        
        for(ll i = 0; i < n; i++)
            cin >> v[i];
            
        for(ll i = 0; i < n; i++){
            if(v[i] == 1){
                for(ll j = i+1; j < i+1+k && j < n; j++)
                    if(v[j] == 1) goto erro;
            }
        }
        
        for(ll i = 0; i < n; i++){
            if(v[i] == 1){
                for(ll j = i+1; j < i+1+k && j < n; j++)
                    v[j] = 2;
                for(ll j = i-1; j > i-1-k && j >= 0; j--)
                    v[j] = 2;
            }
        }
        
        for(ll i = 0; i < n; i++)
            if(v[i] == 0) goto erro;
        
        cout << "Yes\n";
        continue;
        
        erro:
            cout << "No\n";
    }

    return 0;
}