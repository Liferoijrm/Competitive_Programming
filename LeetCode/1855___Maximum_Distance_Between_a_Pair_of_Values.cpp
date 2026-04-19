class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0, max_distance = 0;
        while(j < nums2.size()){
            for(; i <= j && i < nums1.size(); i++){
                if(nums1[i] <= nums2[j]){
                    max_distance = max(max_distance, j - i);
                    break;
                }
            }
            if(i == nums1.size()) break;
            j++;
        }
        return max_distance;
    }
};