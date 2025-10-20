#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int max = 0;
        int n; cin >> n;
        for (int i = 0; i < n; ++i) {
            int temp; cin >> temp;
            if (temp >= max) max = temp;
        }

        cout << max << '\n';
    }

    return 0;
}