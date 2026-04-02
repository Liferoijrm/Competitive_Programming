#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m, a; 
    cin >> n >> m >> a;

    ll base = n/a;
    ll height = m/a;
    if(n%a != 0) base++;
    if(m%a != 0) height++;
    
    cout << base*height << '\n';
}