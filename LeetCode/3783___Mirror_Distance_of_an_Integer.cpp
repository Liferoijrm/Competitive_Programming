#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mirrorDistance(int n) {
        int aux = n;
        string rev = to_string(aux);
        reverse(rev.begin(), rev.end());
        aux = stoi(rev);
        return abs(n - aux);
    }
};