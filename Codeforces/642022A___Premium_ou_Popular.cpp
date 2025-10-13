#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<ll> s;
    ll t, sum;

    cin >> sum >> t;

    while(t--){
        ll aux, value;
        cin >> aux >> value;

        if(aux == 1){
            sum+=value;
            s.push(value);
        }
        else if(aux == 2){
            for(ll i = 0; i < value; i++){
                ll aux2 = s.top();
                s.pop();
                sum-=aux2;
            }
        }
    }

    cout << sum << '\n';

    return 0;
}