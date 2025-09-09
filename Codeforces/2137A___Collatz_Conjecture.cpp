#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int num;

    cin >> num;

    for (long long int idx = 0; idx < num; idx++){
        
        long long int k, x;

        cin >> k >> x;

        for(long long int i = 0; i < k; i++){
            x*=2;
        }

        cout << x << endl;
    }

    return 0;
}