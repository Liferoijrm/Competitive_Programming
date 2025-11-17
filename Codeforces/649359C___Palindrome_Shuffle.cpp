#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<ll>

bool hasMidPallindrome(string s){
    return (s[(s.length()/2)-1] == s[s.length()/2]);
}

bool hasEvenDistribution(string s, ll b, ll e){
    vl rightFreq(26), leftFreq(26);
    for(ll i = 0; i < b; i++){
        ll j = s[i] - 97;
        rightFreq[j]++;
    }
    for(ll i = e+1; i < s.length(); i++){
        ll j = s[i] - 97;
        leftFreq[j]++;
    }
    for(ll i = 0; i < 26; i++){
        if(rightFreq[i] != leftFreq[i]) return false;
    }
    return true;
}

void findSubString(string s, ll& size){
    vl letterFreq(26), freq(26);
    for(ll i = 0; i < s.length(); i++){
        ll j = s[i] - 97;
        letterFreq[j]++;
    }

    ll iMPbgn = (s.length()/2)-1;
    ll iMPend = s.length()/2;

    if(hasMidPallindrome(s)){
        while(s[iMPbgn] == s[iMPend]){
            iMPend++;
            iMPbgn--;
        }
        iMPbgn++;
        iMPend--;
    }

    ll iF, iB;

    for(ll i = 0; i < s.length(); i++){
        ll j = s[i] - 97;
        if(freq[j]+1 <= letterFreq[j]/2) 
            freq[j]++;
        else{
            iF = i;
            break;
        }
    }

    fill(freq.begin(), freq.end(), 0);

    for(ll i = s.length()-1; i >= 0; i--){
        ll j = s[i] - 97;
        if(freq[j]+1 <= letterFreq[j]/2) 
            freq[j]++;
        else{
            iB = i;
            break;
        }
    }

    ll forwardSize = s.length() - iF;
    ll backwardSize = iB+1;

    if(hasMidPallindrome(s) && hasEvenDistribution(s, iMPbgn, iMPend)){
        if(iMPend >= iF && iMPbgn <= iF){
            ll diff = iMPend - iF;
            forwardSize-=(diff+1);
        }
        if(iMPend >= iB && iMPbgn <= iB){
            backwardSize = iMPbgn;
        }
    }

    size = min(forwardSize, backwardSize);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll size = 0;

        string str;
        cin >> str;

        ll bgn = 0, end = str.length()-1;

        while(str[bgn] == str[end] && bgn < end){
            bgn++;
            end--;
        }

        if(bgn < end){
            string s(str.begin() + bgn, str.begin() + end+1);
            findSubString(s, size);
        }

        cout << size << '\n';
    }

    return 0;
}
