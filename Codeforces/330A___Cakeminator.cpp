#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m, count = 0;
    cin >> n >> m;

    vector<vector<char>> mat(n, vector<char>(m));

    vector<bool> blockLine(n, false);
    vector<bool> blockCollum(m, false);

    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            cin >> mat[i][j];
            if(mat[i][j] == 'S'){
                blockLine[i] = true;
                blockCollum[j] = true;
            }
        }
    }

    for(ll i = 0; i < n; i++){
        if(!blockLine[i]){
            for(ll j = 0; j < m; j++){
                if(mat[i][j] != '*'){
                    mat[i][j] = '*';
                    count++;
                }
            }
        }
    }

    for(ll j = 0; j < m; j++){
        if(!blockCollum[j]){
            for(ll i = 0; i < n; i++){
                if(mat[i][j] != '*'){
                    mat[i][j] = '*';
                    count++;
                }
            }
        }
    }

    cout << count << '\n';

    return 0;
}