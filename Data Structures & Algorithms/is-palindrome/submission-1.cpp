class Solution {
public:

    bool isAlphaNum(int i, string s) {
        if(!(s[i] >= '0' && s[i] <= '9') && !(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= 'A' && s[i] <= 'Z')) {
            return false;
        }
        return true;
    }

    bool isPalindrome(string s) {
        
        int n = s.size();
        int i = 0, j = n - 1;

        while(i <= j) {
            if(!isAlphaNum(i, s) || s[i] == ' ') {
                i++; continue;
            }
            if(!isAlphaNum(j, s) || s[j] == ' ') {
                j--; continue;
            }
            if(tolower(s[i]) == tolower(s[j])) {
                i++; j--;
            }
            else {
                return false;
            }
        }
        return true;
    }
};
