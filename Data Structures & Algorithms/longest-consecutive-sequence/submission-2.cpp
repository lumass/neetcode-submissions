class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        for(int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }
        int longest = 0;
        int curr = 0;
        for(int i = 0; i < n; i++) {
            if(st.count(nums[i] - 1)) {
                continue;
            }
            int ele = nums[i];
            while(st.count(ele)) {
                curr++;
                ele++;
            }
            longest = max(longest, curr);
            curr = 0;
        }
        
        return longest;
    }
};
