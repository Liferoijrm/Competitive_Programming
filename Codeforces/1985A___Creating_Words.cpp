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
        string a, b;
        cin >> a >> b;

        char aux = a[0];
        a[0] = b[0];
        b[0] = aux;

        cout << a << ' ' << b << '\n';

ll g;
    }
  
    return 0;
}