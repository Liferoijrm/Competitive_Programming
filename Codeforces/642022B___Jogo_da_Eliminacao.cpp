#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    vector<ll> passos(k);

    for(ll i = 0; i < n; i++){
        v[i] = i+1;
    }

    for(ll i = 0; i < k; i++){
        cin >> passos[i];
    }

    ll pos_lider = 0;
    ll pos_eliminado;

    for(ll i = 0; i < k; i++){
        pos_eliminado = passos[i]%v.size();
        if(pos_lider + pos_eliminado >= v.size()){
            pos_eliminado = llabs(v.size() - (pos_lider + pos_eliminado));
        }
        else pos_eliminado+=pos_lider;
        pos_lider = pos_eliminado;
        cout << v[pos_eliminado] << ' ';
        v.erase(v.begin() + pos_eliminado);
    }
    cout << '\n';

    return 0;
}