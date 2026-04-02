#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        bool farmou_aura_e_ego = false;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a == 67) farmou_aura_e_ego = true;
        }

        farmou_aura_e_ego ? cout << "Yes\n" : cout << "No\n";
    }

    return 0;
}