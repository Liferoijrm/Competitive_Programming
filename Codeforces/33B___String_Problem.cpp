#include <bits/stdc++.h>
#define ll long long 
using namespace std;

pair<char, ll> minTime(vector<vector<ll>>& graph, char a, char b){
    char c;
    ll aux = min(graph[a - 96][b - 96], graph[b - 96][a - 96]);
    if (aux == graph[a - 96][b - 96]) c = b;
    if (aux == graph[b - 96][a - 96]) c = a;

    for(ll i = 1; i < 27; i++){
        if(graph[a - 96][i] != LONG_LONG_MAX && graph[b - 96][i] != LONG_LONG_MAX && aux > graph[a - 96][i] + graph[b - 96][i]){
            aux = graph[a - 96][i] + graph[b - 96][i];
            c = (char)(i+96);
        }
    }
    return make_pair(c, aux);
}

void FW(vector<vector<ll>>& graph){
    ll n = graph[0].size();
    for(ll k = 1; k < n; k++){
        for(ll i = 1; i < n; i++){
            for(ll j = 1; j < n; j++){
                if(graph[i][k] != LONG_LONG_MAX && graph[k][j] != LONG_LONG_MAX){
                    graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
                }
            }
        }
    }
}

int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string str1, str2;
    vector<vector<ll>> graph(27, vector<ll>(27, LONG_LONG_MAX));

    for(ll i = 0; i < 27; i++){
        graph[i][i] = 0;
    }

    cin >> str1;
    cin >> str2;

    ll m;
    cin >> m;

    for(ll i = 0; i < m; i++){
        char v, u;
        ll weight;
        cin >> v >> u >> weight;
        if(graph[v - 96][u - 96] > weight) graph[v - 96][u - 96] = weight;
    }

    if(str1.length() != str2.length()){
        cout << "-1\n";
        return 0;
    }

    FW(graph);

    bool wrong =  false;
    ll cost = 0;
    string finalstr;
    
    for(ll i = 0; i < str1.size(); i++){
        if(str1[i] != str2[i]){
            pair<char, ll> aux = minTime(graph, str1[i], str2[i]);
            if (aux.second == LONG_LONG_MAX){
                cout << "-1\n";
                wrong = true;
                break;
            }
            cost+=aux.second;
            finalstr.push_back(aux.first);
        }
        else{
            finalstr.push_back(str1[i]);
        }
    }

    if(!wrong){
        cout << cost << '\n' << finalstr << '\n';
    }

    return 0;
}