#include <bits/stdc++.h>
using namespace std;

long long int calcBlock(long long int n){

    if(n < 2){
        return 1;
    }
    if(n == 3){
        return 53;
    }
    if(n == 4){
        return 160;
    }

    long long int blocked = 3+5; // begin col 1
    blocked+=(n+2)*2; // end col 1
    blocked+=(7+n+2)*(n-4)/2; // mid col 1
    blocked+=blocked*(n-3)+n*n*((1+n-3)*(n-3)/2); // all col from 1 to n-2
    blocked+=(2+n*(n-2))*2 + 1; // begin col n-1
    blocked+=((5+n*(n-2)) + (n+n*(n-2)))*(n-4)/2; // mid col n-1
    blocked+=(n+n*(n-2))*2 + 1; // end col n-1
    blocked+=((1+n*(n-1))+n*n)*n/2; // col n

    return blocked;
}

int main(){

    long long int n;
    cin >> n;

    for (long long int i = 1; i <= n; i++){
        long long int blocked = calcBlock(i);

        long long int result = (i*i*i*i) - blocked;

        cout << result << endl;
    }

    return 0;
}

/*
Código mais elegante, que entendi depois:

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    cin >> n;
    
    for(int k=1;k<=n;k++){
        long long kk = k;
        long long total = kk*kk*(kk*kk-1)/2;
        long long attack = 0;
        if(k>=3) attack = 4*(kk-1)*(kk-2);
        cout << (total - attack) << "\n";
    }
}
*/