class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for(string s: strs) { //O(1000)
            string tmp = s;
            sort(tmp.begin(), tmp.end()); //O(100Log100)
            mp[tmp].push_back(s); // O(1)
        }
        for(auto it: mp) {
            vector<string> vec = it.second;
            ans.push_back(vec);
        }
        return ans;
    }

};
