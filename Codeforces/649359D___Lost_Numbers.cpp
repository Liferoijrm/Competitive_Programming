#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<ll> v = {4, 8, 15, 16, 23, 42};

    ll p12, p23, p45, p56;

    cout << "? 1 2\n" << flush;
    cin >> p12;
    cout << "? 2 3\n" << flush;
    cin >> p23;
    cout << "? 4 5\n" << flush;
    cin >> p45;
    cout << "? 5 6\n" << flush;
    cin >> p56;

    vector<ll> ans(6);

    for (ll a : v){
        for (ll b : v) if (b != a){
            for (ll c : v) if (c != a && c != b){
                if (a * b == p12 && b * c == p23){
                    ans[0] = a;
                    ans[1] = b;
                    ans[2] = c;
                }
            }
        }
    }

    for (ll a : v){
        if (a == ans[0] || a == ans[1] || a == ans[2]) continue;
        for (ll b : v){
            if (b == a || b == ans[0] || b == ans[1] || b == ans[2]) continue;
            for (ll c : v){
                if (c == a || c == b || c == ans[0] || c == ans[1] || c == ans[2]) continue;
                if (a * b == p45 && b * c == p56){
                    ans[3] = a;
                    ans[4] = b;
                    ans[5] = c;
                }
            }
        }
    }

    cout << "! ";
    for (int x : ans) cout << x << " ";
    cout << "\n" << flush;

    return 0;
}
