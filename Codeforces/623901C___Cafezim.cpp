#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, cheias, mlTotal;
    cin >> n >> cheias >> mlTotal;

    vector<long long int> xicaras(n);

    for(long long int i = 0; i < n; i++){
        cin >> xicaras[i];
    }

    sort(xicaras.begin(), xicaras.end());

    long long int bottom = xicaras[n-cheias];
    long long int mlMax = mlTotal/cheias;

    if(mlMax > bottom) mlMax = bottom;

    cout << mlMax << '\n';
        
    return 0;
}