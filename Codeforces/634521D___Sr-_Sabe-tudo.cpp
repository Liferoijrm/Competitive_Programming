#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

int main(){

    long long int num;
    cin >> num;

    for(long long int idx = 0; idx < num; idx++){
        
        pair<long long int, string> aux;
        long long int small1 = 300000, small2 = 300000, small3 = 800000, n;
        cin >> n;

        for(long long int i = 0; i < n; i++){
            cin >> aux.first >> aux.second;

            if(aux.second == "01" && aux.first < small1){
                small1 = aux.first; 
            }
            if (aux.second == "10" && aux.first < small2){
                small2 = aux.first;
            }
            if (aux.second == "11" && aux.first < (small1 + small2) && aux.first < small3){
                small3 = aux.first;
            }
        }

        if((small1 != 300000 && small2 != 300000) && (small3 > (small1 + small2))) cout << small1 + small2 << '\n';
        else if (small3 != 800000) cout << small3 << '\n';
        else cout << -1 << '\n';
    }

    return 0;
}