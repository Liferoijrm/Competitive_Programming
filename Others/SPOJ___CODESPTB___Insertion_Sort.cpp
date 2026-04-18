#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

#define N 1000002 // tamanho máximo de um elemento do vetor

void incrementTree(ll i, vector<ll>& tree){
    while(i < tree.size()){
        tree[i]++;
        i += (i & -i); 
    }
}

ll sum(ll i, vector<ll>& tree){
    ll ans = 0;
    while(i > 0){
        ans+=tree[i];
        i -= (i & -i);
    }
    return ans;
}

void solve(){

    // armazena quantos números menores que idx existem 
    // ou seja, salva a soma da qtd de elementos menores que idx **até o momento**
    vector<ll> fenwickTree(N, 0); 

    ll n, aux, ans = 0, biggest_yet = 0;
    cin >> n;

    for(ll i = 0; i < n; i++){
        cin >> aux;
        incrementTree(aux, fenwickTree);
        biggest_yet = max(aux, biggest_yet);
        ans += sum(biggest_yet, fenwickTree) - sum(aux, fenwickTree);
    }

    cout << ans << endl;
}

int main(){ fastio;

    ll t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
