class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int, int> mp;
        for(auto& it: nums) {
            mp[it]++;
        }
        vector<pair<int, int>> topK;
        for(auto& [key, val]: mp) {
            topK.push_back({val, key});
        }
        sort(topK.rbegin(), topK.rend());
        vector<int> ans;
        for(int i = 0; i < k; i++) {
            ans.push_back(topK[i].second);
        }
        return ans;
    }
};
