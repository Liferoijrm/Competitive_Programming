#include <bits/stdc++.h>
 
using namespace std;
 
string removeChar(string str, char l){
    string strret = str;
    for(int i = 0; i < strret.length(); i++){
        if (strret[i] == l){
            strret.erase(i, 1);
            break;
        }
    }
    return strret;
}
 
set<string> calcPermutations(string letras, char a){
    set<string> aux;
 
    if(letras.length() == 1){
        aux.insert(letras);
        return aux;
    }
 
    for(char l : letras){
        set<string> aux2 = calcPermutations(removeChar(letras, l), l);
        set<string> aux3;
        for(string str : aux2){
            aux3.insert(l + str);
        }   
        aux.insert(aux3.begin(), aux3.end());
    }
 
    return aux;
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    string str;
    set<string> total;
 
    cin >> str;
 
    if(str.length() == 1){
        cout << "1\n" << str << '\n';
        return 0;
    }
 
    for(char l : str){
        set<string> aux = calcPermutations(removeChar(str, l), l);
        set<string> aux3;
        for(string s : aux){
            aux3.insert(l + s);
        }
        total.insert(aux3.begin(), aux3.end());
    }
 
    cout << total.size() << '\n';
    for(string s : total){
        cout << s << '\n';
    }
 
    return 0;
}
