#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int num;
    cin >> num;

    for(long long int idx = 0; idx < num; idx++){
        long long int a, b;
        cin >> a;

        string astr;
        cin >> astr;

        cin >> b;

        string bstr;
        cin >> bstr;
        
        string steps;
        cin >> steps;

        for(int i = 0; i < steps.length(); i++){
            if(steps[i] == 'D'){
                astr.push_back(bstr[i]);
            }
            else{
                string aux;
                aux.push_back(bstr[i]);
                astr.insert(0, aux);
            }
        }

        cout << astr << '\n';
    }

    return 0;
}
