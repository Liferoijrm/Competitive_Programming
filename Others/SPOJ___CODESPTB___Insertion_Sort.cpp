#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

ll insertionSort(vector<ll>& v){
    ll count = 0;
    for(ll i = 1; i < v.size(); i++){
        ll j = i;
        while(j > 0 && v[j] < v[j-1]){
            count++;
            swap(v[j], v[j-1]);
            j -= 1;
        }
    }
    return count;
}

void solve(){
    ll n;
    cin >> n;

    vector<ll> v(n);

    for(ll i = 0; i < n; i++)
        cin >> v[i];

    cout << insertionSort(v) << endl;
}

int main(){ fastio;

    ll t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
