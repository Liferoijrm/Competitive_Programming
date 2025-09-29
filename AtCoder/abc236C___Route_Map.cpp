#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vs vector<string>

int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    ll n1, n2;
    cin >> n1 >> n2;
    
    vs v(n1);
    map<string,bool> mapping;

    for(ll i = 0; i < n1; i++){
        cin >> v[i];
    }

    for(ll i = 0; i < n2; i++){
        string aux;
        cin >> aux;
        mapping[aux] = true;
    }

    for(ll i = 0; i < n1; i++){
        mapping[v[i]] == true? cout << "Yes\n" : cout << "No\n";
    }
    
    return 0;
}