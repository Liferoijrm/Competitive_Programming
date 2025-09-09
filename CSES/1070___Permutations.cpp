#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    long long int n;
    cin >> n;
 
 
    if (n <= 3) {
        if (n == 1) cout << 1 << endl;
        else cout << "NO SOLUTION" << '\n';
        return 0;
    }
 
    for (long long int i = 2; i <= n; i+=2) {
        if(i != 2) cout << ' ';
        cout << i;
    }
 
 
    for (long long int i = 1; i <= n; i+=2) {
        cout << ' ' << i;
    }
 
 
    cout << '\n';
    return 0;
}
