#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<vector<ll>> dir = {
    {0, 1, 1, 1, 0, -1, -1, -1},
    {-1, -1, 0, 1, 1, 1, 0, -1}
};

bool bfs (vector<vector<char>>& tabuleiro, ll atual_i, ll atual_j){
    vector<vector<bool>> visitado(tabuleiro.size(), vector<bool>(tabuleiro[0].size(), false));
    queue<pair<ll, ll>> q;
    q.push(make_pair(atual_i, atual_j));
    visitado[atual_i][atual_j] = true;
    bool caminho = false;

    while(!q.empty()){
        pair<ll, ll> u = q.front();
        q.pop();
        for(ll i = 0; i < 8; i++){
            if(u.first+dir[0][i] < 0 || u.first+dir[0][i] >= tabuleiro.size()) continue;
            if(u.second+dir[1][i] < 0 || u.second+dir[1][i] >= tabuleiro[0].size()) continue;
            if(!visitado[u.first+dir[0][i]][u.second+dir[1][i]] && tabuleiro[u.first+dir[0][i]][u.second+dir[1][i]] != '#'){
                visitado[u.first+dir[0][i]][u.second+dir[1][i]] = true;
                q.push(make_pair(u.first+dir[0][i], u.second+dir[1][i]));
                if(tabuleiro[u.first+dir[0][i]][u.second+dir[1][i]] == 'B'){
                    caminho = true;
                    break;
                }
            }
        }
        if(caminho) break;
    }
    return caminho;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    ll inicial_j, inicial_i;
    ll qx, qy;
    ll dx, dy;

    cin >> n;

    vector<vector<char>> tabuleiro(n, vector<char>(n, '.'));

    cin >> qx >> qy;
    cin >> inicial_j >> inicial_i;
    cin >> dx >> dy;

    qx--;
    qy--;
    inicial_i--;
    inicial_j--;
    dx--;
    dy--;

    tabuleiro[dy][dx] = 'B';

    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            if(i == qy || j == qx) tabuleiro[i][j] = '#';
            else if(fabs(qy - i) == fabs(qx - j)) tabuleiro[i][j] = '#';
        }
    }

    bool caminho = bfs(tabuleiro, inicial_i, inicial_j);

    caminho? cout << "YES\n" : cout << "NO\n";

    return 0;
}