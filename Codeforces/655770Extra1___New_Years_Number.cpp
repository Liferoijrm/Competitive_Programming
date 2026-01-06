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
        ll q;
        cin >> q;

        bool solvable = false;
        if(q%2021 == 0) solvable = true;
        if(q%2020 == 0) solvable = true;
        while(q > 0 && !solvable){
            q-=2021;
            if(q%2020 == 0 && q > 0){
                solvable = true;
            }
        }

        solvable? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}