#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

vi dp(1000000, 0);

int count(graph& g, int node){
    if(g[node].size() == 0) return dp[node] = 0;
    int counter = 0;
    for(auto a : g[node]){
        counter += count(g, a) + 1;
    }
    return dp[node] = counter;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    graph g(n+1);

    for(int i = 2 ; i <= n ; i++){
        int j; cin >> j;
        g[j].pb(i);
    }

    count(g, 1);

    for(int i = 1 ; i <= n ; i++){
        cout << dp[i] << ' ';
    }

    cout << '\n';
    
    return 0;
}