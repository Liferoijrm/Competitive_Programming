#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        vector<int> pos;
        for (int i = 0; i < n; i++) if (s[i] == '0') pos.push_back(i + 1);
        string r;
        for (char c : s) if (c != '0') r += c;
        cout << pos.size() << "\n";
        for (int i = 0; i < (int)pos.size(); i++) {
            cout << pos[i];
            if (i + 1 < (int)pos.size()) cout << " ";
        }
        cout << "\n";
    }
}