class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(auto& it: nums) {
            mp[it]++;
        }
        vector<vector<int>> buckets(nums.size() + 1);
        for(auto& [key, val]: mp) {
            buckets[val].push_back(key);
        }
        // 3 -> 3, 2, 4
        // 2 -> 1
        // 1 -> 5
        vector<int> ans;
        for(int i = buckets.size() - 1; i >= 0; i--) {
            if(!buckets[i].empty()) {
                for(auto it: buckets[i]) {
                    ans.push_back(it);
                    k--;
                    if(k == 0) break;
                }
            }
            if(k == 0) break;
        }
        return ans;
    }
};
