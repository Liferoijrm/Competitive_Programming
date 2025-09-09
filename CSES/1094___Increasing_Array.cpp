#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    long long int n, aux, count = 0;
    cin >> n;
 
 
    if (n == 1) {
        cout << '0' << '\n';
        return 0;
    }
 
 
    vector<int> v(n);
    for (long long int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
 
    for (long long int i = 1; i < n; i++) {
        if (v[i] < v[i - 1]) {
            aux = v[i - 1] - v[i];
            count += aux;
            v[i] += aux;
        }
    }
 
 
    cout << count << '\n';
    return 0;
}