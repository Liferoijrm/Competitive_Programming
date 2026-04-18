#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

int main(){ fastio; 

    string s1, s2;
    cin >> s1 >> s2; 

    vector<ll> a;
    vector<ll> b;

    for(char c : s1) {
        a.pb(c - '0'); 
    }

    for(char c : s2) {
        b.pb(c - '0');
    }
    
    vector<ll> result(a.size());
    for(ll i = 0; i < a.size(); i++){
        result[i] = a[i] + b[i];
        result[i]%=2;
    }

    for(ll i = 0; i < a.size(); i++){
        cout << result[i];
    }

    return 0;
}