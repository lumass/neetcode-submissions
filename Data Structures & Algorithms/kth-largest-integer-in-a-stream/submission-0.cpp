class KthLargest {
public:

    int kth;
    priority_queue<int> pq;

    KthLargest(int k, vector<int>& nums) {
        
        kth = k;
        for(auto it: nums) {
            pq.push(it);
        }

    }
    
    int add(int val) {
        
        pq.push(val);
        priority_queue<int> temp = pq;
        int idx = kth;
        int ans = 0;
        while(!temp.empty()) {
            if(idx == 0) return ans;
            ans = temp.top();
            temp.pop();
            idx--;
        }
        return ans;
    }
};
