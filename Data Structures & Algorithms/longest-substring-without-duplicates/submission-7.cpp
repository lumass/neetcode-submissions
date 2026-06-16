class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_set<char> st;
        if(n == 0) return 0;
        int mx = 1;
        int j = 0;
        int i = 0;
        while(i < n) {
            if(st.count(s[i])) {
                while(st.count(s[i])) {
                    st.erase(s[j]);
                    j++;
                }
            }
            mx = max(mx, i - j + 1);
            st.insert(s[i]);
            i++;
        }
        return mx;
    }
};
