#include <bits/stdc++.h>
#define ll long long 
using namespace std;

vector<ll> temperaturePsum;

ll Psum(ll i){
    if (i < 0) return 0;
    return temperaturePsum[i];
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll days;
    cin >> days;

    vector<ll> mounts(days);
    vector<ll> temperatures(days);
    vector<ll> auxTemperaturePsum(days);
    vector<ll> meltingDays(days);
    vector<ll> volLeft2Melt(days);
    vector<ll> remainingMountsDelta(days);
    vector<ll> remainingMounts(days);
    vector<pair<ll, ll>> totalSnowLeft2Melt(days);

    for(ll i = 0; i < days; i++){
        cin >> mounts[i];
    }
    for(ll i = 0; i < days; i++){
        cin >> temperatures[i];
    }
    for(ll i = 0; i < days; i++){
        if(i == 0) auxTemperaturePsum[i] = temperatures[i];
        else auxTemperaturePsum[i] = temperatures[i] + auxTemperaturePsum[i-1];
    }

    temperaturePsum = auxTemperaturePsum;

    for(ll i = 0; i < days; i++){
        auto it = lower_bound(temperaturePsum.begin(), temperaturePsum.end(), mounts[i] + Psum(i-1));
        if(it != temperaturePsum.end()) meltingDays[i] = it - temperaturePsum.begin();
        else meltingDays[i] = it - temperaturePsum.begin() - 1;
    }
    for(ll i = 0; i < days; i++){
        volLeft2Melt[i] = mounts[i] - (Psum(meltingDays[i] - 1) - Psum(i-1));
    }
    for(ll i = 0; i < days; i++){
        ll createdDay = i;
        ll meltDay = meltingDays[i];
        remainingMountsDelta[createdDay]++;
        if((meltDay + 1) < days) remainingMountsDelta[meltDay+1]--;
    }
    for(ll i = 0; i < days; i++){
        if(i == 0) remainingMounts[i] = remainingMountsDelta[i];
        else remainingMounts[i] = remainingMountsDelta[i] + remainingMounts[i-1];
    }
    for(ll i = 0; i < days; i++){
        if(volLeft2Melt[i] <= temperatures[meltingDays[i]]){
            totalSnowLeft2Melt[meltingDays[i]].first++;
            totalSnowLeft2Melt[meltingDays[i]].second+=volLeft2Melt[i];
        }
    }
    for(ll i = 0; i < days; i++){
        cout << remainingMounts[i]*temperatures[i] - (totalSnowLeft2Melt[i].first*temperatures[i] - totalSnowLeft2Melt[i].second) << '\n';
    }
 
    return 0;
}