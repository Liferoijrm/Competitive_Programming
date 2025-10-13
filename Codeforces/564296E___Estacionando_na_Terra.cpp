#include <bits/stdc++.h>
#define ll long long 
using namespace std;
 
vector<ll> djikstra(vector<vector<pair<ll, ll>>>& graph, ll begin){
    int n = graph.size();
    vector<ll> dist(n, LONG_LONG_MAX);
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    dist[begin] = 0;
    pq.push(make_pair(dist[begin], begin));
    while(!pq.empty()){
        pair<ll, ll> u = pq.top();
        pq.pop();
        if(u.first > dist[u.second]) continue;
        for(pair<ll, ll> w : graph[u.second]){
            if(dist[w.first] > dist[u.second] + w.second){
                dist[w.first] = dist[u.second] + w.second;
                pq.push(make_pair(dist[w.first], w.first));
            }
        }
    }
    return dist;
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n, m;
    cin >> n >> m;
 
    vector<vector<pair<ll, ll>>> graph(n+1);
 
    for(ll i = 0; i < m; i++){
        ll v, u, weight;
        cin >> v >> u >> weight;
        graph[v].push_back(make_pair(u, weight));
        graph[u].push_back(make_pair(v, weight));
    }
 
    vector<ll> dist1 = djikstra(graph, 1);
    vector<ll> distn = djikstra(graph, n);
    ll max = 0;
    for(ll i = 0; i < dist1.size(); i++){
        if(max < dist1[i] + distn[i]) max = dist1[i] + distn[i];
    }
 
    cout << max << '\n';
 
    return 0;
}