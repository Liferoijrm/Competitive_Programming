#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

#define N 1000002 // tamanho máximo de um elemento do vetor

int main(){ fastio; 

    string s;
    cin >> s;
    ll n = 0;

    for(ll i = 0; i < s.length(); i++)
        if(s[i] == '4' || s[i] == '7')
            n++;

    string s2 = to_string(n);

    for(ll i = 0; i < s2.length(); i++){
        if(s2[i] != '4' && s2[i] != '7'){
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";

    return 0;
}