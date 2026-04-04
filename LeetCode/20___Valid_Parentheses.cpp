#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> close = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for (char c : s) {
            if (st.empty() || close.find(c) == close.end() || st.top() != close[c]) {
                st.push(c);
            } else {
                st.pop();
            }
        }

        return st.empty();
    }
};