#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
ll qtd = 0;
 
void countWays(vector<vector<char>> tabuleiro, ll lin, ll col){
    //cout << lin << ' ' << col << '\n';
    if(col == 7){
        for(ll i = 0; i < 8; i++){
            if(tabuleiro[i][col] != '*') qtd++;
        }
        return;
    }
 
    for(ll i = 0; i < 8; i++){
        for(ll j = 0; j < 8; j++){
            if(i == lin || j == col || abs(i - lin) == abs(j - col)){
                tabuleiro[i][j] = '*';
            }
        }
    }
 
    for(ll i = 0; i < 8; i++){
        if(tabuleiro[i][col+1] != '*') countWays(tabuleiro, i, col+1);
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    vector<vector<char>> tabuleiro(8, vector<char>(8));
 
    for(ll i = 0; i < 8; i++){
        for(ll j = 0; j < 8; j++){
            cin >> tabuleiro[i][j];
        }
    }
 
    for(ll i = 0; i < 8; i++){
        if(tabuleiro[i][0] != '*') countWays(tabuleiro, i, 0);
    }
 
    cout << qtd << '\n';
    
    return 0;
}