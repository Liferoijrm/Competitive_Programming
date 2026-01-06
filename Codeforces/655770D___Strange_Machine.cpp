#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll seconds(ll n, vector<char>& machines){
    ll seconds = 0;
    while(n > 0){
        for(ll i = 0; i < machines.size(); i++){
            if(n == 0) break;
            seconds++;
            if(machines[i] == 'A'){
                n-=1;
            }
            if(machines[i] == 'B'){
                n = floor(n/2);
            }
        }
    }
    return seconds;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n, q;
        bool hasB = false;
        cin >> n >> q;

        vector<char> machines(n);
        vector<ll> nums(q);
        for(ll i = 0; i < n; i++){
            cin >> machines[i];
            if (machines[i] == 'B') hasB = true;
        }
        for(ll i = 0; i < q; i++) cin >> nums[i];

        for(ll i = 0; i < q; i++){
            hasB? cout << seconds(nums[i], machines) : cout << nums[i];
            cout << '\n';
        }
    }

    return 0;
}