#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

int main(){

    long long int n;

    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int count1 = 0, count2 = 0, total = 0, k = 0;

    while(v[k] == v[0]){
        if(v[0] == 1) count1++;
        else count2++;

        k++;
    }

    int mode = v[k];

    for(int i = k; i < n; i++){
        if(v[i] == mode){
            if (mode == 1) count1++;
            else count2++;
        }
        else{
            if(mode == 1){
                if(min(count1, count2) > total) total = min(count1, count2);
                count2 = 1;
                mode = 2;
            }
            else{
                if(min(count1, count2) > total) total = min(count1, count2);
                count1 = 1;
                mode = 1;
            }
        }
    }

    if(min(count1, count2) > total) total = min(count1, count2);
    
    cout << total*2 << '\n';

    return 0;
}