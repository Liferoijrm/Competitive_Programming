#include <bits/stdc++.h>
#define ll long long 
using namespace std;
 
void FW(vector<vector<ll>>& graph){
    ll n = graph[0].size();
    for(ll k = 1; k < n; k++){
        for(ll i = 1; i < n; i++){
            for(ll j = 1; j < n; j++){
                if(graph[i][k] != LONG_LONG_MAX && graph[k][j] != LONG_LONG_MAX){
                    graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
                }
            }
        }
    }
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n, m, q;
    cin >> n >> m >> q;
 
    vector<vector<ll>> graph(n+1, vector<ll>(n+1, LONG_LONG_MAX));
 
    for(ll i = 0; i < n+1; i++){
        graph[i][i] = 0;
    }
 
    for(ll i = 0; i < m; i++){
        ll v, u, weight;
        cin >> v >> u >> weight;
        if(graph[v][u] > weight) graph[v][u] = weight;
        if(graph[u][v] > weight) graph[u][v] = weight;
    }
 
    FW(graph);
    
    for(ll i = 0; i < q; i++){
        ll begin, end;
        cin >> begin >> end;
        if(graph[begin][end] != LONG_LONG_MAX) cout << graph[begin][end] << '\n';
        else cout << -1 << '\n';
    }
 
    return 0;
}