#include <bits/stdc++.h>
using namespace std;

#define ll long long

pair<ll, ll> bestDragonToKill(ll s, vector<pair<ll, ll>>& dragons, vector<bool>& killed){
    pair<ll, ll> currDragon = make_pair(-1, -1);
    ll currIdx = 0;
    for(ll i = 0; i < dragons.size(); i++){
        if(dragons[i].first >= s) break;
        else if(dragons[i].second > currDragon.second && killed[i] == false){
            currDragon = dragons[i];
            currIdx = i;
        }
    }
    killed[currIdx] = true;
    return currDragon;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll s, n;
    bool died = false;
    cin >> s >> n;

    vector<pair<ll, ll>> dragons(n);
    vector<bool> killed(n, false);

    for(ll i = 0; i < n; i++){
        ll dragon, bonus;
        cin >> dragon >> bonus;

        dragons[i] = make_pair(dragon, bonus);
    }

    sort(dragons.begin(), dragons.end());

    while(n--){
        pair<ll, ll> dragon = bestDragonToKill(s, dragons, killed);
        if(dragon.first == -1 || dragon.first >= s){
            died = true;
            break;
        }
        else{
            s+=dragon.second;
        }
    }

    died? cout << "NO\n" : cout << "YES\n";

    return 0;
}