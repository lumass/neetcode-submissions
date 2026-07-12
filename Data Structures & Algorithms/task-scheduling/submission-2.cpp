class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
/*     
    3A 2Z 1X 1B 1C  A
    2Z 1X 1B 1C 2A  Z
    1X 1B 1C 2A 1Z  X
    1B 1C 2A 1Z     B
    1C 2A 1Z        
*/
//GREEDY

        vector<int> count(26, 0);

        for(char ch: tasks) {
            count[ch - 'A']++;
        }
        
        sort(count.begin(), count.end());

        int maxF = count[25];

        int idle = (maxF - 1) * n;

        for(int i = 24; i >= 0; i--) {
            idle -= min(maxF - 1, count[i]);
        }
        return max(0, idle) + tasks.size();
    }
};






