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
        vector<ll> v(3);
        ll count = 0;
        for(ll i = 0; i < 3; i++){
            cin >> v[i];
            if(v[i] >= 50) count++;
        }
        count > 1? cout << "Yes\n" : cout << "No\n";
    }

    return 0;
}