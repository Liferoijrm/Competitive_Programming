#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vb vector<bool>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
typedef vector<vector<int>> graph;

int dfs(graph& g, int node, vb& visited, int depth){
    visited[node] = true;
    int best = depth;

    for(auto a : g[node]){
        if(!visited[a]) best = max(best, dfs(g, a, visited, depth+1));
    }

    return best;
}

signed main(void){
    int n;

    cin >> n;
    graph g(n+1); 
    for(int i = 1; i <= n; i++){
        int j; cin >> j;
        if(j != -1){
            g[j].pb(i);
        }
    }

    int maior = 0;

    for(int i = 1 ; i <= n ; i++){
        vb visited(n+1, false);
        maior = max(maior, dfs(g, i, visited, 1));
    }

    cout << maior << endl;
    
    return 0;
}