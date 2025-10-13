#include <bits/stdc++.h>
#define ll long long 
using namespace std;
 
vector<vector<ll>> dir = {
    {0, 1, 0, -1},
    {-1, 0, 1, 0}
};
vector<char> dirC = {'L', 'D', 'R', 'U'};
 
void printAnswer(vector<char> caminho_final){
    if(caminho_final.empty()){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    cout << caminho_final.size() << "\n";
    for(ll i = 0; i < caminho_final.size(); i++){
        cout << caminho_final[i];
    }
    cout << '\n';
}
 
vector<char> bfs(vector<vector<pair<char, char>>>& labirinto, ll atual_i, ll atual_j){
    vector<vector<bool>> visitado(labirinto.size(), vector<bool>(labirinto[0].size(), false));
    queue<pair<ll, ll>> q;
    vector<char> caminho;
    ll bi = -1, bj = -1;
    q.push(make_pair(atual_i, atual_j));
    visitado[atual_i][atual_j] = true;
 
    while(!q.empty()){
        pair<ll, ll> u = q.front();
        q.pop();
        for (ll i = 0; i < 4; i++){
            if(u.first+dir[0][i] < 0 || u.first+dir[0][i] >= labirinto.size()) continue;
            if(u.second+dir[1][i] < 0 || u.second+dir[1][i] >= labirinto[0].size()) continue;
            if(!visitado[u.first+dir[0][i]][u.second+dir[1][i]] && labirinto[u.first+dir[0][i]][u.second+dir[1][i]].first != '#'){
                visitado[u.first+dir[0][i]][u.second+dir[1][i]] = true;
                q.push(make_pair(u.first+dir[0][i], u.second+dir[1][i]));
                labirinto[u.first+dir[0][i]][u.second+dir[1][i]].second = dirC[i];
                if(labirinto[u.first+dir[0][i]][u.second+dir[1][i]].first == 'B'){
                    bi = u.first+dir[0][i];
                    bj = u.second+dir[1][i];
                    break;
                }
            }
        }
        if(bi != -1 && bj != -1) break;
    }
    if(bi == -1 || bj == -1) return caminho;
        ll i = bi;
        ll j = bj;
        while(labirinto[i][j].first != 'A'){
            caminho.push_back(labirinto[i][j].second);
            if(labirinto[i][j].second == dirC[0]){
                i+=dir[0][2];
                j+=dir[1][2];
            }
            else if(labirinto[i][j].second == dirC[1]){
                i+=dir[0][3];
                j+=dir[1][3];
            }
            else if(labirinto[i][j].second == dirC[2]){
                i+=dir[0][0];
                j+=dir[1][0];
            }
            else if(labirinto[i][j].second == dirC[3]){
                i+=dir[0][1];
                j+=dir[1][1];
            }
        }
        reverse(caminho.begin(), caminho.end());
        return caminho;
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n, m, inicial_i, inicial_j;
    cin >> n >> m;
 
    vector<vector<pair<char, char>>> labirinto(n, vector<pair<char, char>>(m));
 
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            cin >> labirinto[i][j].first;
            labirinto[i][j].second = '\0';
            if(labirinto[i][j].first == 'A'){
                inicial_i = i;
                inicial_j = j;
            }
        }
    }
 
    vector<char> caminho = bfs(labirinto, inicial_i, inicial_j);
 
    printAnswer(caminho);
 
    return 0;
}