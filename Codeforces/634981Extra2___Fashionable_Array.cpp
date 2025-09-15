#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int num;
    cin >> num;

    for(long long int idx = 0; idx < num; idx++){
        long long int n, bgn, end, parb, pare, firstIdx = -1, lastIdx = -1, ops = 0;

        cin >> n;
        vector<long long int> v(n);

        for(long long int i = 0; i < n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        bgn = 0;
        end = n-1;

        parb = v[bgn]%2;
        pare = v[end]%2;

        if(v.size() == 1) cout << "0\n";
        else if(v.size() == 2 && parb == pare) cout << "0\n";
        else if(v.size() == 2 && parb != pare) cout << "1\n";
        else if(parb == pare) cout << "0\n";
        else{
            for(int i = 1; i < n; i++){
                if(v[i]%2 == pare){
                    firstIdx = i;
                    break;
                }
            }

            for(int i = n-2; i > 0; i--){
                if(v[i]%2 == parb){
                    lastIdx = i;
                    break;
                }
            }

            if(firstIdx == -1){
                ops = (n - lastIdx - 1);
            }
            else if(lastIdx == -1){
                ops = firstIdx;
            }
            else {
                ops = min((n - lastIdx - 1),firstIdx);
            }

            cout << ops << '\n';
        }
    }
        
    return 0;
}