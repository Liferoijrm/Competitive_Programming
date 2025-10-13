#include <bits/stdc++.h>
#define ll long long 
using namespace std;
 
class Comparator{
    public:
        bool operator()(pair<ll, pair<ll, ll>> a, pair<ll, pair<ll, ll>> b){
            if (a.second.second > b.second.second) return true;
            if (a.second.second == b.second.second && a.first > b.first) return true;
            return false; 
        }
};
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    ll n, m;
    cin >> n >> m;
 
    priority_queue<pair<ll, pair<ll, ll>>, vector<pair<ll, pair<ll, ll>>>, Comparator> caixas;
    vector<ll> cliente(m);
 
    for(ll i = 0; i < n; i++){
        ll aux;
        cin >> aux;
        caixas.push(make_pair(i, make_pair(aux, 0)));
    }
    for(ll i = 0; i < m; i++){
        cin >> cliente[i];
    }
 
    for(ll i = 0; i < m; i++){
        pair<ll, pair<ll, ll>> caixa;
        caixa.first = caixas.top().first;
        caixa.second.first = caixas.top().second.first;
        caixa.second.second = caixas.top().second.second;
        caixas.pop();
        caixa.second.second+=cliente[i]*caixa.second.first;
        caixas.push(caixa);
    }
    
    ll tempo = 0;

    for(ll i = 0; i < n; i++){
        pair<ll, pair<ll, ll>> caixa = caixas.top();
        caixas.pop();
        if(caixa.second.second > tempo) tempo = caixa.second.second;
    }
 
    cout << tempo << '\n';
 
    return 0;
}