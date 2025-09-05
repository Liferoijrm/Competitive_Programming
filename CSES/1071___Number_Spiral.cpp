#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);  
 
    long long int num, lin, col, diag;
    cin >> num;
 
    for(long long int idx = 0; idx < num; idx++){
 
        cin >> lin >> col;
 
        if(lin < col){
            diag = col*col - col + 1;
            if(col%2 == 0) cout << diag - (col - lin) << endl;
            else cout << diag + (col - lin) << endl;
        }
        if(lin > col){
            diag = lin*lin - lin + 1;
            if(lin%2 == 0) cout << diag + (lin - col) << endl;
            else cout << diag - (lin - col) << endl;
        }
        if(lin == col) cout << lin*lin - lin + 1 << endl;
    }
 
    return 0;
}
