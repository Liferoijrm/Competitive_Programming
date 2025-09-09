#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num; 
    cin >> num;

    for (int idx = 0; idx < num; idx++) {
        int n, m;

        cin >> n >> m;

        cout << 'W';

        for (int i = 1; i < m; i++) 
            cout << 'B';
        cout << '\n';
       
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << 'B';
            }
            cout << '\n';
        }
    }

    return 0;
}