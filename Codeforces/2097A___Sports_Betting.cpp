#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

bool hasFourEqualDigits(vi v){
    ll count = 1, countMax = 1;

    for(ll i = 1; i < v.size(); i++){
        if(v[i] != v[i-1]){
            if(countMax < count) countMax = count;
            count = 1;
        }
        else count++;
    }

    if(countMax < count) countMax = count;

    if(countMax >= 4) return true;
    return false;
}

bool hasConnectedGroups(vi v){
    bool searching = false;
    ll bgn;

    for(ll i = 1; i < v.size(); i++){
        if(searching){
            if(v[i] == v[i-1] && v[i] != bgn) return true;
            else if(v[i] != v[i-1] && v[i] != v[i-1]+1) searching = false;
        }
        else{
            if(v[i] == v[i-1]){
                searching = true;
                bgn = v[i];
            }
        }
    }
    return false;
}

int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vi v(n);
        for(ll i = 0; i < n; i++) cin >> v[i];

        if(n < 4){
            cout << "No\n";
            continue;
        }

        sort(v.begin(), v.end());

        if(hasFourEqualDigits(v)){
            cout << "Yes\n";
            continue;
        }

        if(hasConnectedGroups(v)){
            cout << "Yes\n";
            continue;
        }

        cout << "No\n";
    }

    return 0;
}