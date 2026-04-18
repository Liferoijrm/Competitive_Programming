#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

int main(){ fastio; 

    ll n, tram = 0, m = 0;
    cin >> n;

    for(ll i = 0; i < n; i++){
        ll a, b;
        cin >> a >> b;
        tram-=a;
        tram+=b;
        m = max(m, tram);
    }
        
    cout << m << endl;

    return 0;
}