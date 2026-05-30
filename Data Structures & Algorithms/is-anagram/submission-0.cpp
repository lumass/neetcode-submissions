class Solution {
public:
    bool isAnagram(string s, string t) {
        
        map<char, int> st, tt;
        for(auto ch: s) {
            st[ch]++;
        }
        for(auto ch: t) {
            tt[ch]++;
        }
        if(st.size() != tt.size()) {
            return false;
        }
        for(auto it: st) {
            int cnts = it.second;
            char ch = it.first;
            if(cnts != tt[ch]) {
                return false;
            }
        }
        return true;
    }
};
