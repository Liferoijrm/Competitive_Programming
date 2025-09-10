#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

int main(){

    long long int num;

    cin >> num;

    for(int idx = 0; idx < num; idx++){
        string str;
        bool no = false;
        cin >> str;

        if(str.length() == 1) cout << "YES\n";
        else{
            sort(str.begin(), str.end());

            for(int i = 1; i < str.length(); i++){
                if(str[i] == str[i-1] || str[i-1] != str[i]-1){
                    cout << "NO\n";
                    no = true;
                    break;
                }
            }
            if(!no) cout << "YES\n";
        }
    }

    return 0;
}