#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;
    vector<vector<char>> v(n, vector<char>(n));
    vector<ll> cord_i;
    vector<ll> cord_j;

    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            cin >> v[i][j];
            if(v[i][j] == '*'){
                cord_i.push_back(i);
                cord_j.push_back(j);
            }
        }
    }

    if(cord_i[0] == cord_i[1]){
        if(cord_i[0] > 0){
            v[cord_i[0]-1][cord_j[0]] = '*';
            v[cord_i[1]-1][cord_j[1]] = '*';
        }   
        else{
            v[cord_i[0]+1][cord_j[0]] = '*';
            v[cord_i[1]+1][cord_j[1]] = '*';
        }
    }
    else if(cord_j[0] == cord_j[1]){
        if(cord_j[0] > 0){
            v[cord_i[0]][cord_j[0]-1] = '*';
            v[cord_i[1]][cord_j[1]-1] = '*';
        }   
        else{
            v[cord_i[0]][cord_j[0]+1] = '*';
            v[cord_i[1]][cord_j[1]+1] = '*';
        }
    }
    else{
        v[cord_i[0]][cord_j[1]] = '*';
        v[cord_i[1]][cord_j[0]] = '*';
    }

    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            cout << v[i][j];
        }
        cout << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}