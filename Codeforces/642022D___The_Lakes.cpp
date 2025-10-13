#include <bits/stdc++.h>
#define ll long long 
using namespace std;

ll maxLake = 0;
 
vector<vector<ll>> dir = {
    {0, 1, 0, -1},
    {-1, 0, 1, 0}
};

void bfs(vector<vector<ll>>& grid, vector<vector<bool>>& visitado, ll atual_i, ll atual_j){
    queue<pair<ll, ll>> q;
    q.push(make_pair(atual_i, atual_j));
    visitado[atual_i][atual_j] = true;
    ll count = 0;
 
    while(!q.empty()){
        pair<ll, ll> u = q.front();
        q.pop();
        count+=grid[u.first][u.second];
        for (ll i = 0; i < 4; i++){
            if(u.first+dir[0][i] < 0 || u.first+dir[0][i] >= grid.size()) continue;
            if(u.second+dir[1][i] < 0 || u.second+dir[1][i] >= grid[0].size()) continue;
            if(!visitado[u.first+dir[0][i]][u.second+dir[1][i]] && grid[u.first+dir[0][i]][u.second+dir[1][i]] != 0){
                visitado[u.first+dir[0][i]][u.second+dir[1][i]] = true;
                q.push(make_pair(u.first+dir[0][i], u.second+dir[1][i]));
            }
        }
    }
    if(count > maxLake) maxLake = count;
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
    
        ll n, m;
        cin >> n >> m;
 
        vector<vector<ll>> grid(n, vector<ll>(m));
        vector<vector<bool>> visitado(grid.size(), vector<bool>(grid[0].size(), false));
 
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                cin >> grid[i][j];
            }
        }
        
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                if(!visitado[i][j] && grid[i][j] != 0)
                    bfs(grid, visitado, i, j);
            }
        }
 
        cout << maxLake << '\n';
        maxLake = 0;
    }
 
    return 0;
}
