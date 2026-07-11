class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int> pq;

        for(auto it : stones) {
            pq.push(it);
        }

// 2, 3, 6, 2, 4
// 2, 2, 3, 4, 6

        while(!pq.empty()) {
            if(pq.size() == 1) return pq.top();
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();
            if(first == second) {
                continue;
            }
            if(first < second) {
                pq.push(second - first);
            }
            else {
                pq.push(first - second);
            }
        }
        return 0;
    }
};
