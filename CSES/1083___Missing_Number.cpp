#include <bits/stdc++.h>
#include <vector>
 
using namespace std;
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long int n, sum = 0, aux;
 
    cin >> n;
 
    for(long long int i = 0; i < (n-1) ; i++){
        cin >> aux;
        sum+=aux;
    }
 
    long long int apSum = (1 + n)*n/2;
 
    cout << (apSum - sum) << endl;
 
    return 0;
}