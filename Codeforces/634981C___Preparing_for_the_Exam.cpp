#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int num;
    cin >> num;

    for(long long int idx = 0; idx < num; idx++){
        long long int n, m, k;
        cin >> n >> m >> k;

        vector<long long int> lists(m);
        long long int knows = 0;

        for(long long int i = 0; i < m; i++){
            cin >> lists[i];
        }
        for(long long int i = 0; i < k; i++){
            long long int aux;
            cin >> aux;
            knows+=aux;
        }

        if(k == n){
            for(long long int i = 0; i < m; i++){
                cout << '1';
            }
            cout << '\n';
        }
        else if (k < n-1){
            for(long long int i = 0; i < m; i++){
                cout << '0';
            }
            cout << '\n';
        }
        else{
            long long int dk = ((1+n)*n/2) - knows;

            for(long long int i = 0; i < m; i++){
                if(lists[i] == dk) cout << '1';
                else cout << '0';
            }
            cout << '\n';
        }
    }

    return 0;
}
