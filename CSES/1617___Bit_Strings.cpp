#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    const long long int mod = 1000000007;
    long long int n, result = 1;
 
    cin >> n;
 
    for(long long int i = 0; i < n; i++){
        result = (result * 2)%mod;
    }
 
    cout << result << '\n';
 
    return 0;
}