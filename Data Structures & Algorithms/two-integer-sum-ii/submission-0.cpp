class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> ans;
        int n = numbers.size();
        int i = 0, j = n - 1;
        int curr = 0;
        while(i < j) {
            if(numbers[i] + numbers[j] == target) {
                ans.push_back(i + 1);
                ans.push_back(j + 1);
                break;
            }
            if(numbers[i] + numbers[j] > target) {
                j--; continue;
            }
            else {
                i++; 
            }
        }
        return ans;
    }
};
