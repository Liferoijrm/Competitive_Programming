#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num;

    cin >> num;

    for (int idx = 0; idx < num; idx++){

        int m, n, per = 0;
        pair<int, int> sqr;

        cin >> n >> m;

        cin >> sqr.first >> sqr.second;
        per+=4*m;

        for (int i = 1; i < n; i++){

            cin >> sqr.first >> sqr.second;

            per+=4*m;
            per-=(m-sqr.first)*2+(m-sqr.second)*2;
        }

        cout << per << endl;
    }

    return 0;
}