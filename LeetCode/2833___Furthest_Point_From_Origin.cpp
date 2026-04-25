class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l = 0, r = 0, n = 0;
        for(int i = 0; i < moves.length(); i++){
            if(moves[i] == 'R') r++;
            else if (moves[i] == 'L') l++;
            else if (moves[i] == '_') n++;
        }
        return abs(l-r) + n;
    }
};