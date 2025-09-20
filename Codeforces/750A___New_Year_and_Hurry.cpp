#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, k, sum = 0, problems = 0;
    cin >> n >> k;
        
    long long int minutes = 240 - k;

    for(long long int i = 1; i <= n; i++){
        sum+=5*i;
        if(sum > minutes) break;
        problems++; 
    }

    cout << problems << '\n';
        
    return 0;
}