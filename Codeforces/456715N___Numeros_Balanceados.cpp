#include <bits/stdc++.h>
using namespace std;

int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    string str;
    cin >> str;

    stack<char> st;

    for(int i = 0; i < str.length(); i++){
        if(st.empty()) st.push(str[i]);
        else{
            st.top() == str[i]? st.pop() : st.push(str[i]); 
        }
    }

    st.empty()? cout << "sim\n" : cout << "nao\n";
    
    return 0;
}