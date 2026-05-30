class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
    
        for(int i = 0; i < n; i++) {
            int target = -(nums[i]);
            int lo = i + 1, hi = n - 1;
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            while(lo < hi) {
                if(nums[lo] + nums[hi] == target) {
                    ans.push_back({nums[i], nums[lo], nums[hi]});
                    lo++; hi--;
                    while(lo < hi && nums[lo] == nums[lo - 1]) lo++;
                    continue;
                }
                if(nums[lo] + nums[hi] > target) {
                    hi--;
                }
                else {
                    lo++;
                }
            }
        }
        return ans;
    }
};
