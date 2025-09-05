#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num;

    cin >> num;

    for (int idx = 0; idx < num; idx++){

        int n, sum = 0, aux;

        cin >> n;

        for (int i = 0; i < n; i++){
            cin >> aux;
            sum+=aux;
        }

        if(sum%2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}