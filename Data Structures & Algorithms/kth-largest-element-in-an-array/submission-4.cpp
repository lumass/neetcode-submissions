class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int, vector<int>, greater<int>> pq;

        for(auto it : nums) {
            if(pq.size() == k) {
                if(it < pq.top()) {
                    continue;
                }    
                else {
                    pq.pop();
                    pq.push(it);
                }
            }
            else {
                pq.push(it);
            }
        }
        
        return pq.top();
    }
};
