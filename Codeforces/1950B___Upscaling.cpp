#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num; 
    cin >> num;

    for (int idx = 0; idx < num; idx++) {
        int n;
        char a, b;

        cin >> n;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) { 
                a = '#'; 
                b = '.'; 
            } else { 
                a = '.'; 
                b = '#'; 
            }
            for (int j = 0; j < n; j++) {
                if (j % 2 == 0) cout << a << a;
                else cout << b << b;
            }
            
            cout << '\n';

            for (int j = 0; j < n; j++) {
                if (j % 2 == 0) cout << a << a;
                else cout << b << b;
            }

            cout << '\n';
        }
    }

    return 0;
}