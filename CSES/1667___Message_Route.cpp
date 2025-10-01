#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void printVector(vl v){
    if(v.size() == 1){
        cout << "IMPOSSIBLE\n";
        return;
    }
    cout << v.size() << '\n';
    for(ll i = v.size()-1; i >= 0; i--){
        if(i != v.size()-1) cout << ' ';
        cout << v[i];
    }
    cout << '\n';
}

vl bfs(vector<vl> graph){
    queue<ll> q;
    q.push(1);
    vector<bool> visited(graph.size(), false);
    visited[1] = true;
    vl previous(graph.size(), 0);
    previous[1] = 0;
    while(q.size()){
        ll u = q.front();
        q.pop();
        for(ll w : graph[u]){
            if(!visited[w]){
                visited[w] = true;
                q.push(w);
                previous[w] = u;
            }
        }
    }
    vl answer;
    ll curr = graph.size()-1;
    while(previous[curr] != 0){
        answer.push_back(curr);
        curr = previous[curr];
    }
    answer.push_back(1);

    return answer;
}

int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    ll n, m;
    cin >> n >> m;
    vector<vl> graph(n+1);

    for(ll i = 0; i < m; i++){
        ll aux1, aux2;
        cin >> aux1 >> aux2;
        graph[aux1].push_back(aux2);
        graph[aux2].push_back(aux1);
    }

    vl answer = bfs(graph);

    printVector(answer);
    
    return 0;
}