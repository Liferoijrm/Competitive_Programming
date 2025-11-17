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
        ll x, y, z;

        cin >> x >> y >> z;

        if((x&y) == (y&z) && (x&y) == (x&z)) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}