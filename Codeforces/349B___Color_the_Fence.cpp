#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll money, cheapest_digit = 0;
    cin >> money;
    vector<ll> price(10, LLONG_MAX);

    for(ll i = 1; i < 10; i++){
        cin >> price[i];
        if(price[i] <= price[cheapest_digit]) 
            cheapest_digit = i;
    }

    if(money < price[cheapest_digit]){
        cout << -1 << '\n';
        return 0;
    }

    ll digits = money/price[cheapest_digit];
    money-=digits*price[cheapest_digit];

    vector<ll> number(digits, cheapest_digit);

    for(ll i = 9; i > cheapest_digit; i--){
        for(ll j = 0; j < digits; j++){
            if(number[j] >= i) continue;
            ll diff = price[i]-price[number[j]];
            if(money >= diff){
                number[j] = i;
                money-=diff;
            }
            else break;
        }
    }

    for(ll i = 0; i < digits; i++){
        cout << number[i];
    }
    cout << '\n';
  
    return 0;
}