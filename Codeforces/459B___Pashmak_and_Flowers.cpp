#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

int main(){ fastio; 

    ll n;
    cin >> n;

    vector<ll> v(n);

    for(ll i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    ll first = v[0];
    ll last = v[v.size()-1];
    ll diff = last - first;

    if(diff == 0){
        ll qtd_first = ub(v.begin(), v.end(), first) - lb(v.begin(), v.end(), first);
        ll comb = (qtd_first * (qtd_first-1))/2;
        cout << diff << ' ' << comb << endl;
    }
    else{
        ll qtd_first = ub(v.begin(), v.end(), first) - lb(v.begin(), v.end(), first);
        ll qtd_last = ub(v.begin(), v.end(), last) - lb(v.begin(), v.end(), last);

        cout << diff << ' ' << qtd_first*qtd_last << endl;
    }

    return 0;
}