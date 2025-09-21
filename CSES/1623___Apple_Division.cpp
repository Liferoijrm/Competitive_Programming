#include <bits/stdc++.h>
using namespace std;

int n;
double target;
vector<long long int> v;

long long int targetSum(long long int pos, long long int sum){

    if(pos == (n-1)){
        if (fabs(target - (sum+v[pos])) < fabs(target - sum)) return sum+v[pos];
        else return sum; 
    }

    long long int finalSum1 = targetSum(pos+1, sum+v[pos]);
    long long int finalSum2 = targetSum(pos+1, sum);

    if (fabs(target - finalSum1) < fabs(target - finalSum2)) return finalSum1;
    else return finalSum2; 
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    long long int sum = 0;

    for(long long int i = 0; i < n; i++) {
        long long int aux;
        cin >> aux;
        v.push_back(aux);
        sum += v[i];
    } 

    if (n == 1){
        cout << v[0] << '\n';
        return 0;
    }

    target = (double) sum/2;

    long long int finalSum1 = targetSum(1, v[0]);
    long long int finalSum2 = targetSum(1, 0);

    if (fabs(target - finalSum1) < fabs(target - finalSum2)) cout << fixed << setprecision(0) << (fabs(target - finalSum1))*2 << '\n';
    else cout << fixed << setprecision(0) << (fabs(target - finalSum2))*2 << '\n';
    
    return 0;
}