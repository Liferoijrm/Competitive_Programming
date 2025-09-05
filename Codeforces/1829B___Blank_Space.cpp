#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;

    for (int idx = 0; idx < num; idx++) {
        int n, a, count = 0, value = 0;
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> a;
            if (a == 1) {
                if (count > value) value = count;
                count = 0;
            }
            if (a == 0) {
                count++;
            }
        }

        if (count > value) value = count;
        cout << value << "\n";
    }

    return 0;
}