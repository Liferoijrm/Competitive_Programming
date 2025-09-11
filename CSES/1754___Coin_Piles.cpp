#include <bits/stdc++.h>
using namespace std;
 
void swap(long long int* a, long long int* b){
    if (*a < *b){
        long long int temp = *a;
        *a = *b;
        *b = temp;
    }
}
 
int main(){
 
    long long int num;
    cin >> num;
 
    for(long long int idx = 0; idx < num; idx++){
        long long int a, b;
        cin >> a >> b;
 
        swap(&a, &b);
 
        long long int dif = a - b;
 
        if(dif != 0){
            a-=2*dif;
            b-=dif;
        }
 
        if(a >= 0 && a%3 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
 
    return 0;
}
