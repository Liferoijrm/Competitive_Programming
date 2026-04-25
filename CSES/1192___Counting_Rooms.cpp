#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

vi dir_i = {0 , 1, 0, -1};
vi dir_j = {1 , 0, -1, 0};

bool isValid(int i, int j, vector<vector<char>>& graph){
    if(i < 0 or i >= graph.size() or j < 0 or j >= graph[0].size() or graph[i][j] == '#')
       return false;
    return true;
}

void dfs(vector<vector<char>>& graph, ii v, vector<vector<bool>>& visited){
    int a = v.first;
    int b = v.second;
    visited[a][b] = true;

    for(int i = 0; i < 4; i++){
        int ni = a + dir_i[i];
        int nj = b + dir_j[i];
        if(isValid(ni, nj, graph) && !visited[ni][nj]){
            dfs(graph, mp(ni, nj), visited);
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<vector<char>> graph(n, vector<char>(m));
    int count = 0;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) 
            cin >> graph[i][j];

    vector<vector<bool>> visited(n, vector<bool>(m, false));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(graph[i][j] == '.' and !visited[i][j]){
                count++;
                dfs(graph, mp(i, j), visited);
            }
        }
    }

    cout << count << endl;
    
    return 0;
}