#include <bits/stdc++.h>
using namespace std;
 
#define ll long long 
#define vl vector<ll>
 
ll kadane (vl & v){
    ll currSum = 0, maxSum = LLONG_MIN;
    for(ll i = 0; i < v.size(); i++){
        currSum = max(currSum + v[i], v[i]);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    ll n;
    cin >> n;
 
    vl v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];                                    
 
    cout << kadane(v) << '\n';
 
    return 0;
}