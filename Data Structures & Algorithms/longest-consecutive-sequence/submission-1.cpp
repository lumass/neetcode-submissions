class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();
        unordered_map<int, int> mp;
        unordered_set<int> st;
        for(int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }
        int longest = 0;
        int curr = 0;
        for(int i = 0; i < n; i++) {

            int ele = nums[i];
            if(mp.count(ele + 1)) {
                mp[ele] = mp[ele + 1] + 1;
                continue;
            }
            while(st.count(ele)) {
                curr++;
                ele++;
            }
            mp[nums[i]] = curr;
            curr = 0;
        }
        for(auto& [__, val]: mp) {
            longest = max(longest, val);
        }
        return longest;
    }
};
