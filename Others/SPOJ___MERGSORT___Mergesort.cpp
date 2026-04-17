#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

void printVector(vector<ll> v){
    for(ll i = 0; i < v.size(); i++){
        cout << v[i];
        if(i != v.size()-1) cout << ' ';
    }
    cout << endl;
}

vector<ll> merge(vector<ll> v1, vector<ll> v2){
    vector<ll> v;

    for(ll i = 0, j = 0; i < v1.size() || j < v2.size();){
        if(i >= v1.size()){
            v.pb(v2[j]);
            j++;
        }
        else if(j >= v2.size()){
            v.pb(v1[i]);
            i++;
        }
        else{
            if(v1[i] < v2[j]){
                v.pb(v1[i]);
                i++;
            }
            else{
                v.pb(v2[j]);
                j++;
            }
        }
    }
    return v;
}

vector<ll> mergeSort(vector<ll> v){
    if(v.size() <= 1) return v;
    ll half = v.size()/2;
    vector<ll> a(v.begin(), v.begin()+half);
    vector<ll> b(v.begin()+half, v.end());
    vector<ll> v1 = mergeSort(a);
    vector<ll> v2 = mergeSort(b);
    v = merge(v1, v2);
    return v;
}

int main(){ fastio;
    
    ll a;
    vector<ll> v;

    while(cin >> a)
        v.pb(a);

    printVector(mergeSort(v));

    return 0;
}
