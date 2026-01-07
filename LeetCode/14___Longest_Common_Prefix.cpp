class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        int smallest_length = strs[0].length();
        for(int i = 0; i < strs.size(); i++){
            smallest_length = min(smallest_length, (int)strs[i].length());
        }
        for(int i = 0; i < smallest_length; i++){
            bool mismatch = false;
            for(int j = 0; j < strs.size()-1; j++){
                if(strs[j][i] != strs[j+1][i]){
                    mismatch = true;
                    break;
                }
            } 
            if(!mismatch)
                prefix.push_back(strs[0][i]);
            else 
                break;
        }
        return prefix;
    }
};