#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll n, sum = 0;

    cin >> n;

    for(ll i = 0; i < n; i++){
        ll aux;
        cin >> aux;
        pq.push(aux);
    }

    while(pq.size() > 1){
        ll aux1 = pq.top();
        pq.pop();
        ll aux2 = pq.top();
        pq.pop();

        sum+=max(aux1, aux2);

        ll aux3 = aux1 + aux2;
        pq.push(aux3);
    }

    cout << sum << '\n';

    return 0;
}