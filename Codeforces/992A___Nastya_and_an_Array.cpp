#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, count;

    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    if (v.size() == 1){
        if (v[0] == 0) cout << "0\n";
        else cout << "1\n";
        return 0;
    }

    sort(v.begin(), v.end());

    if (v[0] == 0) count = 0;
    else count = 1;
    
    for (int i = 1; i < n; i++){
        if (v[i] != v [i-1] && v[i] != 0){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}