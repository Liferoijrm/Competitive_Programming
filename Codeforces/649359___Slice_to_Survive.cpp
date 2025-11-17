#include <bits/stdc++.h>
using namespace std;

#define vl vector<long long>
#define ll long long
#define mp make_pair

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;

    cin >> t;

    while(t--){
        ll n, m, a, b;

        cin >> n >> m >> a >> b;

        vector<pair<int, int>> retangulos({
            mp(a, m), mp(n - a + 1, m),
            mp(n, b), mp(n, m - b + 1)
        });
        int soma = n + m;
        for (auto [n1, m1] : retangulos) {
            int iteracoes = 0;
            while (n1 > 1) {
                iteracoes++;
                n1 = (n1 + 1) / 2;
            }
            while (m1 > 1) {
                iteracoes++;
                m1 = (m1 + 1) / 2;
            }
            soma = min(soma, iteracoes);
        }
        cout << 1 + soma << endl;
    }

    return 0;
}