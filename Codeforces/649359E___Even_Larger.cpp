#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<ll>

void check1(vl& v, ll& op, ll curr){
    if(v[curr] < v[curr-1]){
        ll diff = v[curr-1]-v[curr];
        op+=diff;
        v[curr-1] = v[curr];
    }
}

void check2(vl& v, ll& op, ll curr){
    if(v[curr] < v[curr-1]+v[curr+1]){
        ll diff = (v[curr-1]+v[curr+1])-v[curr];
        op+=diff;
        if(diff > v[curr+1]){
            diff-=v[curr+1];
            v[curr+1] = 0;
            v[curr-1]-=diff;
        }
        else v[curr+1]-=diff;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n, op = 0;
        cin >> n;

        vl v(n);
        for(ll i = 0; i < n; i++) cin >> v[i];

        for(ll i = 1; i < n; i+=2){
            if(i+1 >= n) check1(v, op, i);
            else check2(v, op, i);
        }

        cout << op << '\n';
    }

    return 0;
}
