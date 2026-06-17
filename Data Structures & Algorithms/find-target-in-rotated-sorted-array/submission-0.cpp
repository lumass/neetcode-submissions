class Solution {
public:

// 100  ....   15   .......  7         
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();


        int lo = 0, hi = n - 1;
        int ans = -1;
        while(lo <= hi) {

            int mid = (lo + hi) / 2;

            if(nums[mid] == target) {
                ans = mid; break;
            }

            if(nums[hi] >= nums[mid]) {
                if(target > nums[mid] && target <= nums[hi])
                    lo = mid + 1;
                else 
                    hi = mid - 1;
            }
            if(nums[lo] <= nums[mid] ) {
                if(target >= nums[lo] && target <= nums[mid])
                    hi = mid - 1;
                else
                    lo = mid + 1;
            }

        }
        return ans;
    }
};
