#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

vector<ll> lin = {-1, 1, 2, 2, 1, -1, -2, -2};
vector<ll> col = {2, 2, 1, -1, -2, -2, -1, 1};

void printMatrix(vector<vector<ll>>& board){
    for(ll i = 0; i < board.size(); i++){
        for(ll j = 0; j < board.size(); j++){
            cout << board[i][j] << ' ';
        }
        cout << '\n';
    }
}

bool isOnBoard(vector<vector<ll>>& board_value, pair<ll, ll> curr, ll i){
    ll n = board_value.size();
    return (curr.first+lin[i] < n && curr.first+lin[i] >= 0 && curr.second+col[i] < n && curr.second+col[i] >= 0);
}

void bfs(vector<vector<ll>>& board_value){
    board_value[0][0] = 0;
    queue<pair<ll, ll>> q;
    q.push(mp(0, 0));

    while(!q.empty()){
        pair<ll, ll> curr = q.front();
        q.pop();
        for(ll i = 0; i < 8; i++){
            if(isOnBoard(board_value, curr, i) && board_value[curr.first+lin[i]][curr.second+col[i]] == -1){
                board_value[curr.first+lin[i]][curr.second+col[i]] = board_value[curr.first][curr.second] + 1;
                q.push(mp(curr.first+lin[i], curr.second+col[i]));
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n;
    cin >> n;
    vector<vector<ll>> board(n, vector<ll>(n, -1));
    bfs(board);

    printMatrix(board);
  
    return 0;
}