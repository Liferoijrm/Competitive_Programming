#include <bits/stdc++.h>
using namespace std;

int main(){

    long long int n;

    cin >> n;

    vector<vector<long long int>> matrix(pow(2, n), vector<long long int>(n, 0));

    for (long long int j = 0; j < n; j++){
        long long int change = pow(2, j+1), curr = 1, count = 0;

        for(long long int i = pow(2, j); i < pow(2, n); i++){
            
            matrix[i][j] = curr;
            count++;

            if(count%change == 0 && curr == 1) curr = 0;
            else if(count%change == 0 && curr == 0) curr = 1;
        }    
    }

    for(long long int i = 0; i < pow(2, n); i++){
        for(long long int j = 0; j < n; j++){
            cout << matrix[i][j];
        }
        cout << '\n';
    }

    return 0;
}