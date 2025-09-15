#include <bits/stdc++.h>
using namespace std;

bool zerosAdj(vector<int> v){
    for(long long int i = 1; i < v.size(); i++){
        if(v[i] == 0 && v[i-1] == 0) return true;
    }
    return false;
}

int main(){
        
     ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int num;
    cin >> num;

    for(long long int idx = 0; idx < num; idx++){

        long long int n;
        cin >> n;
        long long int sum = 0;

        vector<int> v(n);

        for(long long int i = 0; i < n; i++){
            long long int aux;
            cin >> aux;
            v[i] = aux;
            sum+=aux;
        }

        if(sum > (n-1) || zerosAdj(v)) cout << "YES\n";
        else cout << "NO\n";
    }
        
    return 0;
}