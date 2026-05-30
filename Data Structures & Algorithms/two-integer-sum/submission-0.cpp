class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
	for(auto it: nums) {
		mp[it]++;
	}
	vector<int> ans;
	bool found = false;
	int tofindint = 0;
	for(int i = 0; i < nums.size(); i++) {
		int tofind = target - nums[i];
		if(tofind == nums[i]) {
			if(mp[tofind] > 1) {
				found = true; 
				tofindint = tofind;
				ans.push_back(i);
				break;
			}
		}
		else if(mp[tofind]){
			found = true;
			tofindint = tofind;
			ans.push_back(i);
			break;
		}
	}
	for(int i = 0; i < nums.size(); i++) {
		if(nums[i] == tofindint && i != ans[0]) {
			ans.push_back(i);
		}
	}
	sort(ans.begin(), ans.end());
	return ans;
    }
};
