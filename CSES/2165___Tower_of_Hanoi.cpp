#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, int begin, int aux, int end){
    if(n==1){
        cout << begin << ' ' << end << '\n';
        return;
    }
    hanoi(n-1, begin, end, aux);
    cout << begin << ' ' << end << '\n';
    hanoi(n-1, aux, begin, end);
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    int n;
    cin >> n;
    cout << pow(2,n)-1 << '\n';
    hanoi(n, 1, 2, 3);
}