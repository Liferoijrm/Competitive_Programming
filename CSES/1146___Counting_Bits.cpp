#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    ll n;
    cin >> n;
    ll bitSize = log(n)/log(2);
    ll qtd = 0;
 
    for(ll i = 0; i <= bitSize; i++){
        ll completeCicles = ((n+1)/(1LL << (i+1)));
        qtd += completeCicles * (1LL << i);
        ll filledSpaces = completeCicles * (1LL << (i+1));
        ll lastCicleSize = (n+1) - filledSpaces;
        ll lastOnes = lastCicleSize - (1LL << i);
        if (lastOnes < 0) lastOnes = 0;
        qtd += lastOnes;
    }
 
    cout << qtd << '\n';
 
    return 0;
}
