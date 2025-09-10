#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

void swap(int* a, int* b){
    if(*a > *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main(){

    int n;
    cin >> n;

    for(int idx = 0; idx < n; idx++){
        int a, b, c, d;

        cin >> a >> b >> c >> d;

        swap(&a, &b);

        if(((c < a || c > b) && (d < a || d > b)) || ((c > a && c < b) && (d > a && d < b))){
            cout << "NO\n";
        }
        else cout << "YES\n";
    }

    return 0;
}