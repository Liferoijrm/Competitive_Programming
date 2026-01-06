#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll findBiggestTerm(vector<ll>& perm, ll bIdx, ll eIdx){
    ll curr = perm[bIdx];
    ll currIdx = bIdx;
    for(ll i = bIdx+1; i < eIdx+1; i++){
        if(perm[i] > curr){
            curr = perm[i];
            currIdx = i;
        }
    }
    return currIdx;
}

void findDepth(vector<ll>& perm, vector<ll>& depth, ll bIdx, ll eIdx, ll dep){
    if(bIdx > eIdx){
        return;
    }
    if(bIdx == eIdx){
        depth[bIdx] = dep;
        return;
    }
    ll idx = findBiggestTerm(perm, bIdx, eIdx);
    depth[idx] = dep;

    findDepth(perm, depth, bIdx, idx-1, dep+1);
    findDepth(perm, depth, idx+1, eIdx, dep+1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;
        vector<ll> perm(n);
        vector<ll> depth(n, 0);

        for(ll i = 0; i < n; i++) cin >> perm[i];
        findDepth(perm, depth, 0, n-1, 0);
        for(ll i = 0; i < n; i++) cout << depth[i] << ' ';
        cout << '\n';
    }

    return 0;
}