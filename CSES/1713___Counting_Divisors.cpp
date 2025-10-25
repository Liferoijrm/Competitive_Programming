#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<pair<int, int>>
#define pb push_back
#define mp make_pair

// get vector with all primes up to n
/*
optimizations:
- sieve by odds only;
- sieve until sqrt of n;
- start marking as composite from i^2.
*/
void eratosthenesSieve(vi & primes, int n){
    vector<bool> isPrime(n+1, true);
    primes.pb(2);
    for(int i = 3; i*i <= n; i+=2){
        if(isPrime[i]){
            for(int j = i*i; j <= n; j+=i){
                isPrime[j] = false;
            }
        }
    }
    for(int i = 3; i < isPrime.size(); i+=2){
        if(isPrime[i]) primes.pb(i);
    }
}

// get vector with the prime factors of n
/*
optimizations:
- check only for primes;
- check until sqrt of n.
*/
void factorization(vii &factors, vi &primes, int n){
    int i = 0;
    while (primes[i]*primes[i] <= n) {
        if (n%primes[i] == 0) {
            int cnt = 0;
            while (n%primes[i] == 0) {
                n/=primes[i];
                cnt++;
            }
            factors.pb(mp(primes[i], cnt));
        }
        i++;
    }
    if (n > 1) factors.pb(mp(n, 1));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vi primes;
    const int n = 1E6;
    eratosthenesSieve(primes, n);

    int t;
    cin >> t;

    while(t--){
        int num, divisors = 1;
        cin >> num;

        vii factors;
        factorization(factors, primes, num);
        
        for(int i = 0; i < factors.size(); i++){
            divisors*=(factors[i].second+1);
        }

        cout << divisors << '\n';
    }

    return 0;
}
