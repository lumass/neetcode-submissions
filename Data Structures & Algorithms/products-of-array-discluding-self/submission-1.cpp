class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans(n, 1);

        int pref = nums[0];
        ans[0] = 1;
        for(int i = 1; i < n; i++) {
            ans[i] = pref;
            pref = pref * nums[i];
        }
        int suff = 1;
        for(int i = n - 2; i >= 0; i--) {
            suff = suff * nums[i + 1];
            ans[i] = ans[i] * suff;
        }
        return ans;
    }
    // Time = O(n)
    // Space = O(1)
};
