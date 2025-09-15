#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int sum = 0;

    for(long long int i = 0; i < 4; i++){
        int aux;
        cin >> aux;
        sum+=aux;
    }

    cout << 15 - sum << '\n';

    return 0;
}
