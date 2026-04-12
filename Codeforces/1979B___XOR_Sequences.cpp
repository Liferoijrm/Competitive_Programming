#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll x, y;
        cin >> x >> y;

        ll diff = (x^y);
        ll ans = (diff&(-diff));

        cout << ans << '\n';
    }
  
    return 0;
}