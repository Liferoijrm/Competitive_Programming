#include <bits/stdc++.h>
using namespace std;

int main(){

    string str;
    int odd = 0, oddPos = -1;
    vector<int> v(26, 0);

    cin >> str;

    for(int i = 0; i < str.length(); i++){
        v[str[i] - 65]++;
    }

    for(int i = 0; i < 26; i++){
        if(v[i]%2 != 0){
            odd++;
            oddPos = i;
        }
    }

    if(odd > 1){
        cout << "NO SOLUTION\n";
        return 0;
    }

    for(int i = 0; i < 26; i++){
        if(i != oddPos){
            for(int j = 0; j < v[i]/2; j++) cout << char(i + 65);
        }
    }

    if(oddPos != -1){
        for(int i = 0; i < v[oddPos]; i++){
            cout << char(oddPos + 65);
        }
    }

    for(int i = 25; i >= 0; i--){
        if(i != oddPos){
            for(int j = 0; j < v[i]/2; j++) cout << char(i + 65);
        }
    }

    cout << '\n';

    return 0;
}