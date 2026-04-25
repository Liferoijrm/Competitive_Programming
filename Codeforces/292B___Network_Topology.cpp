#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ff(m,n) for(int i = 0 ; i < m ; i++)for(int j = 0 ; j < n ; j++)
typedef vector<vector<int>> graph;

bool isBus(vector<int>& v){
    int count1 = 0, count2 = 0;
    for(int i = 1; i < v.size(); i++){
        if(v[i] == 1) count1++;
        if(v[i] == 2) count2++;
    }
    if(count1 == 2 && count1+count2 == v.size()-1) 
        return true;
    return false;
}

bool isRing(vector<int>& v){
    int count2 = 0;
    for(int i = 1; i < v.size(); i++){
        if(v[i] == 2) count2++;
    }
    if(count2 == v.size()-1) 
        return true;
    return false;
}

bool isStar(vector<int>& v){
    int countX = 0, count1 = 0;
    for(int i = 1; i < v.size(); i++){
        if(v[i] == 1) count1++;
        if(v[i] >= 2) countX++;
    }
    if(countX == 1 && countX+count1 == v.size()-1) 
        return true;
    return false;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; 
    cin >> n >> m;
    vector<int> v(n+1, 0);

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        v[a]++;
        v[b]++;
    }

    if(isBus(v)){
        cout << "bus topology\n";
    }   
    else if(isRing(v)){
        cout << "ring topology\n";
    }   
    else if(isStar(v)){
        cout << "star topology\n";
    }
    else{
        cout << "unknown topology\n";
    }
    
    return 0;
}