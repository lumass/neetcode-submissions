class Solution {
public:

    vector<int> track;

    string encode(vector<string>& strs) {

        string ans = "";

        for(string str: strs) {
            ans += str;
            track.push_back(str.size());
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int idx = 0;
        string str = "";
        int counter = 0;
        for(int i = 0; i < track.size(); i++) {
            int len = track[i];
            if(len == 0) {
                ans.push_back("");
            }
            else {
                // hello world
                int j = counter;
                while(j < counter + len) {
                    str += s[j];
                    j++;
                }
                counter = j;
                ans.push_back(str);
                str = "";
            }

        }


        // cout << track.size();
        // track.clear();
        return ans;
    }
};
