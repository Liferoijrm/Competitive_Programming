class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mapping;
        vector<int> answer(2);
        for(int i = 0; i < nums.size(); i++){
            if(!mapping.count(target-nums[i])){
                mapping[nums[i]] = i;
            }
            else{
                answer[0] = mapping[target-nums[i]];
                answer[1] = i;
                return answer;
            }
        }
        return answer;
    }
};