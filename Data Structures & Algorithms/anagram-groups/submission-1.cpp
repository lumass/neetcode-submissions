class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for(const string& s: strs) { //O(1000)
            string tmp(26, 0);
            for(char c: s) {
                tmp[c - 'a']++;
            }
            mp[tmp].push_back(s); // O(1)
        }
        for(auto& [_, vec]: mp) {
            ans.push_back(vec);
        }
        return ans;
    }

};
