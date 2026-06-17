class Solution {
public:

/*

30  38  30  39  40

38 30 39 40
 39  40 




*/


    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        stack<pair<int, int>> stk;
        int n = temperatures.size();
        vector<int> ans(n, 0);
        for(int i = 0; i < n; i++) {
            int curr = temperatures[i];
            int cnt = 0;
            while(!stk.empty() && stk.top().first < curr) {
                
                ans[stk.top().second] = i - stk.top().second;
                stk.pop();
            }
            stk.push({curr, i});
        }
        return ans;
    }
};
