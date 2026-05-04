void cycle(vector<vector<int>>& m, int lin, int col){
    int n = m.size();
    int ni = col;
    int nj = n-lin-1;
    int carry = m[lin][col];

    while(ni != lin || nj != col){
        int temp = m[ni][nj];
        m[ni][nj] = carry;
        carry = temp;

        temp = ni;
        ni = nj;
        nj = n-temp-1;
    }
    m[ni][nj] = carry;
}

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0; i < (n/2+n%2); i++)
            for(int j = i; j < n-i-1; j++)
                cycle(matrix, i, j);
    }
};