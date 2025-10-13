#include <bits/stdc++.h>
#define ll long long 
using namespace std;

vector<ll> djikstra(vector<vector<pair<ll, ll>>>& graph){
    int n = graph.size();
    vector<ll> dist(n, LONG_LONG_MAX);
    vector<ll> previous(n, -1);
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    dist[1] = 0;
    pq.push(make_pair(dist[1], 1));
    while(!pq.empty()){
        pair<ll, ll> u = pq.top();
        pq.pop();
        if(u.first > dist[u.second]) continue;
        for(pair<ll, ll> w : graph[u.second]){
            if(dist[w.first] > dist[u.second] + w.second){
                previous[w.first] = u.second;
                dist[w.first] = dist[u.second] + w.second;
                pq.push(make_pair(dist[w.first], w.first));
            }
        }
    }
    vector<ll> answer;
    ll curr = graph.size()-1;
    while(previous[curr] != -1){
        answer.push_back(curr);
        curr = previous[curr];
    }
    answer.push_back(1);
    reverse(answer.begin(), answer.end());
 
    return answer;
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

    vector<ll> path = djikstra(graph);

    if(path.size() <= 1){
        cout << "-1\n";
        return 0;
    }
    for(ll i = 0; i < path.size(); i++){
        cout << path[i] << ' ';
    }

    cout << '\n';

    return 0;
}