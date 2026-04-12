#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;

    vector<vector<char>> mat(n, vector<char>(n, 'D'));

    ll offset = n/2;

    for(ll i = 0; i < offset; i++){
        for(ll j = 0; j < offset-i; j++){
            mat[i][j] = '*';
        }
    }
    for(ll i = 0; i < offset; i++){
        for(ll j = offset+1+i; j < n; j++){
            mat[i][j] = '*';
        }
    }

    for(ll i = 0; i < offset+1; i++){
        for(ll j = 0; j < n; j++){
            cout << mat[i][j];
        }
        cout << '\n';
    }

    for(ll i = offset-1; i >= 0; i--){
        for(ll j = 0; j < n; j++){
            cout << mat[i][j];
        }
        cout << '\n';
    }
  
    return 0;
}