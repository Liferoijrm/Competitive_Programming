#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

int main(){

    long long int num;
    cin >> num;

    for(long long int idx = 0; idx < num; idx++){

        long long int n, a, count = 0, sum = 0, least = 2e9, zero = false;
        cin >> n;

        for(long long int i = 0; i < n; i++){
            cin >> a;
            if (a < 0){
                count++;
                if(-a < least) least = -a;
                sum+=-a;
            }
            else if (a == 0){
                zero = true;
            }
            else {
                sum+=a;
                if(a < least) least = a;
            }
        }

        if(count%2 == 0 || zero) cout << sum << '\n';
        else cout << sum - 2*least << '\n';
    }

    return 0;
}