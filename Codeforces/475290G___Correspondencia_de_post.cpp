#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
ll qtd = 0;
 
bool check(vector<pair<pair<string, string>, ll>> dominos){
    string top, bottom;
    vector<ll> indexes;
    for(ll i = 0; i < dominos.size(); i++){
        top = top + dominos[i].first.first;
        bottom = bottom + dominos[i].first.second;
        indexes.push_back(dominos[i].second);
        if(top == bottom){
            cout << "Aprovado\n";
            cout << indexes.size() << '\n';
            for(ll i = 0; i < indexes.size(); i++){
                cout << indexes[i]+1 << ' ';
            }
            cout << '\n';
            return true;
        }
    }
    return false;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    ll n;
    cin >> n;
 
    vector<pair<pair<string, string>, ll>> dominos(n);
 
    for(ll i = 0; i < n; i++){
        cin >> dominos[i].first.first;
        cin >> dominos[i].first.second;
        dominos[i].second = i;
    }
 
    sort(dominos.begin(), dominos.end());
 
    bool flag = false;
 
    do{
        flag = check(dominos);
    } while(next_permutation(dominos.begin(), dominos.end()) && !flag);
 
    if(!flag) cout << "Reprovado\n";
 
    return 0;
}