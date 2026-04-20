class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int ans1, ans2;
        int first = colors[0], last = colors[colors.size()-1];
        for(int i = 0; i < colors.size(); i++){
            if(colors[i] != last){
                ans1 = (colors.size()-1 - i); break;
            }
        }
        for(int i = colors.size()-1; i >= 0; i--){
            if(colors[i] != first){
                ans2 = i; break;
            } 
        }
        return max(ans1, ans2);
    }
};