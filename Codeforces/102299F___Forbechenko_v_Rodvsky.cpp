#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<ll>
#define vll vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
 
void eratosthenesSieve(vl & primes, ll n){
    vector<bool> isPrime(n+1, true);
    primes.pb(2);
    for(ll i = 3; i*i <= n; i+=2){
        if(isPrime[i]){
            for(ll j = i*i; j <= n; j+=i){
                isPrime[j] = false;
            }
        }
    }
    for(ll i = 3; i < isPrime.size(); i+=2){
        if(isPrime[i]) primes.pb(i);
    }
}

void factorization(vll &factors, vl &primes, ll n){
    for (ll p : primes) {
        if (p * p > n) break; 
        if (n % p == 0) {
            ll cnt = 0;
            while (n % p == 0) {
                n /= p;
                cnt++;
            }
            factors.pb(mp(p, cnt));
        }
    }

    if (n > 1) {
        ll r = round(sqrtl(n));
        if (r * r == n) {
            factors.pb(mp(r, 2)); 
        } else {
            factors.pb(mp(n, 1)); 
        }
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    vl primes;
    const ll n = 1E6;
    eratosthenesSieve(primes, n);
 
    ll a, b, divisors = 1;
    cin >> a >> b;

    ll common = __gcd(a, b);
    b /= common;

    if (b == 1) {
        cout << 2 << '\n';
        return 0;
    }
 
    vll factors_b;
    factorization(factors_b, primes, b);
        
    for(ll i = 0; i < factors_b.size(); i++){
        divisors*=(factors_b[i].first);
    }
 
    cout << divisors << '\n';
 
    return 0;
}