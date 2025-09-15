#include <bits/stdc++.h>
using namespace std;

int main(){
        
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int num;
    cin >> num;

    for(long long int idx = 0; idx < num; idx++){

        long long int x, y, k;
        cin >> x >> y >> k;

        long long int passosX, passosY, total;
        passosX = (x + k - 1) / k; // divisão inteira com arredondamento pra cima
        passosY = (y + k - 1) / k;
        if(passosX < passosY) total = passosY*2;
        else if(passosX > passosY) total = passosX*2 - 1;
        else total = passosY*2;

        cout << total << '\n';
    }
        
    return 0;
}