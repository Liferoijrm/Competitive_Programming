unordered_map<int, vector<long long>> psums;

long long Psum(int group, int i, int j){
    if(j < 0) return 0;
    if(i <= 0) return psums[group][j];
    return psums[group][j] - psums[group][i-1];
}

class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        vector<long long> ans(nums.size());
        psums.clear();
        unordered_map<int, vector<int>> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]].push_back(i);
            if(!psums[nums[i]].empty())
                psums[nums[i]].push_back(i + psums[nums[i]].back());
            else
                psums[nums[i]].push_back(i);
        }

        for(int i = 0; i < nums.size(); i++){
            int n = nums[i];
            int pos = lower_bound(mp[n].begin(), mp[n].end(), i) - mp[n].begin();
            int after = mp[n].size() - pos - 1;
            int before = mp[n].size() - after - 1;
            ans[i] = (long long)before*i - Psum(n, 0, pos-1) + Psum(n, pos+1, mp[n].size()-1) - (long long)after*i;
        }

        for(int i = 0; i < mp[nums[0]].size(); i++){
            cout << mp[nums[0]][i] << ' ';
        }
        cout << '\n';
        for(int i = 0; i < psums[nums[0]].size(); i++){
            cout << psums[nums[0]][i] << ' ';
        }
        cout << '\n';

        return ans;
    }
};

/* código O(n), melhor e mais simples que o meu, que ficou O(n log n):

class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        vector<long long> ans(n);

        unordered_map<int, long long> count, sum;

        // esquerda -> direita
        for(int i = 0; i < n; i++){
            int x = nums[i];
            if(count.count(x)){
                ans[i] += (long long)i * count[x] - sum[x];
            }
            count[x]++;
            sum[x] += i;
        }

        count.clear();
        sum.clear();

        // direita -> esquerda
        for(int i = n-1; i >= 0; i--){
            int x = nums[i];
            if(count.count(x)){
                ans[i] += sum[x] - (long long)i * count[x];
            }
            count[x]++;
            sum[x] += i;
        }

        return ans;
    }
};

*/