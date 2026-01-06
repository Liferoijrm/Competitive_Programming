#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, count = 0;
    cin >> t;

    while(t--){
        ll x, y, z;
        cin >> x >> y >> z;

        if((x+y+z) >= 2) count++;
    }

    cout << count << '\n';

    return 0;
}