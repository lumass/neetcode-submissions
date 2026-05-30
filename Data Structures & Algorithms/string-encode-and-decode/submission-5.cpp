class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(string str: strs) {
            int len = str.size();
            ans += to_string(len);
            ans += '#';
            ans += str;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int len = 0;    
        string sz = "";
        int i = 0;
        while(i < s.size()) {
            sz += s[i];
            if(s[i] == '#') {
                sz.pop_back();
                int len = stoi(sz);
                string str = "";
                int j = 0;
                for(j = i + 1; j < i + 1 + len; j++) {
                    str += s[j];
                }
                ans.push_back(str);
                i = j;
                sz = "";
                continue;
            }
            i++;
        }
        
        return ans;
    }
};
