#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<long long>

bool isAdjacent(vl graphLine, ll u){
    bool found = false;
    for(ll i = 0; i < graphLine.size(); i++){
        if (graphLine[i] == u){
            found = true;
            break;
        }
    }
    return found;
}
 
ll bfs(vector<vl> graph){
    queue<ll> q;
    q.push(1);
    vector<bool> visited(graph.size(), false);
    visited[1] = true;
    vl layer(graph.size(), 0);
    layer[1] = 0;
    while(q.size()){
        ll u = q.front();
        q.pop();
        for(ll w : graph[u]){
            if(!visited[w]){
                visited[w] = true;
                q.push(w);
                layer[w] = layer[u]+1;
            }
        }
    }
    ll answer = layer[graph.size()-1];
    return answer;
}
 
int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    ll n, m;
    cin >> n >> m;
    vector<vl> graph1(n+1);
    vector<vl> graph2(n+1);
 
    for(ll i = 0; i < m; i++){
        ll aux1, aux2;
        cin >> aux1 >> aux2;
        graph1[aux1].push_back(aux2);
        graph1[aux2].push_back(aux1);
    }

    for(ll i = 1; i <= n; i++){
        for(ll u = 1; u <= n; u++){
            if(!isAdjacent(graph1[i], u)){
                graph2[i].push_back(u);
                graph2[u].push_back(i);
            }
        }
    }
 
    ll path1 = bfs(graph1);
    ll path2 = bfs(graph2);

    if(path1 != 0 && path2 != 0) cout << max(path1, path2) << '\n';
    else cout << "-1\n";

    return 0;
}
