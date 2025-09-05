#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    bool nao = false;

    cin >> n;

    char matriz[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (matriz[i][j] != matriz[j][i]){
                nao = true;
                break;
            }
        }
    }

    if(nao) cout << "Nao\n";
    else cout << "Sim\n";

    return 0;
}