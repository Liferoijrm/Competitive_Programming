#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    long long int counter = 0; 
 
    cin >> n;
 
    while(n >= 5){
        n = n/5;
        counter+=n;
    }
 
    cout << counter << endl;
 
    return 0;
}
