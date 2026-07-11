class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        

        // priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, greater<pair<int, vector<int>>> pq;
        priority_queue<pair<double, vector<int>>> pq;
        vector<vector<int>> ans;
        for(auto coord : points) {
            double x = coord[0];
            double y = coord[1];
            double dist = (double)sqrt((x*x) + (y*y));

            pq.push({dist, coord});
        }

        while(pq.size() > k) {
            cout << pq.top().first << " - {" << pq.top().second[0] << "," << pq.top().second[1] << "}" << endl;
            pq.pop();
        }
        
        while(!pq.empty()) {
            cout << pq.top().first << " - {" << pq.top().second[0] << "," << pq.top().second[1] << "}" << endl;
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
