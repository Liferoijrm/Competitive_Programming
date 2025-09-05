#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);  

    long long int n, sum;
    cin >> n;

    vector<long long int> v;
    vector<long long int> v2;

    sum = (1+n)*n/2;

    if (sum%2 != 0){
        cout << "NO\n";
        return 0;
    }
    else{
        cout << "YES\n";
        sum/=2;
    }

    for(long long int i = n; i > 0; i--){

        if(sum >= i){
            sum-=i;
            v.push_back(i);
        }
        else if (sum < i){

            for(long long int j = i; j > 0; j--){
                if (j != sum) v2.push_back(j);
            }

            if(sum != 0) v.push_back(sum);
            break;
        }
    }

    cout << v.size() << endl;
    for(long long int i = 0; i < v.size(); i++){
        cout << v[i];
        if (i != v.size()-1) cout << " ";
        else cout << endl;
    }

    cout << v2.size() << endl;
    for(long long int i = 0; i < v2.size(); i++){
        cout << v2[i];
        if (i != v2.size()-1) cout << " ";
        else cout << endl;
    }

    return 0;
}