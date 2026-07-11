class KthLargest {
public:

    int kth;
    priority_queue<int, vector<int>, greater<int>> pq;

    KthLargest(int k, vector<int>& nums) {
        
        kth = k;
        for(auto it: nums) {
            pq.push(it);
        }
        while(!pq.empty() && pq.size() > kth) {
            pq.pop();
        }

    }
    
    int add(int val) {
        
        pq.push(val);
        if(!pq.empty() && pq.size() > kth)
            pq.pop();

        return pq.top();
    }
};
