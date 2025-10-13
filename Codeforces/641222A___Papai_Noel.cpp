#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;
    cin >> t;

    stack<long long> s;
    stack<long long> max;

    while(t--){
        char tipo;
        long long n;

        cin >> tipo >> n;

        if(tipo == 'A'){
            s.push(n);
            if(max.empty() || n >= max.top()) max.push(n);
        }
        else if (tipo == 'V'){
            if (max.empty()) cout << "0\n";
            else cout << max.top() << '\n';
        }
        else if (tipo == 'R'){
            long long aux = s.top();
            s.pop();
            if (!max.empty() && aux == max.top()) max.pop();
        }
    }

    return 0;
}