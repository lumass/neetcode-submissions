class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
/*
    3A 2B 2C  A
    2B 2C 2A  B
    2C 2A 1B  C
    2A 1B 1C  I
    2A 1B 1C  A
    1B 1C 1A  B
    1C 1A     C
    1A        I
    1A        A
          
    3A 2Z 1X 1B 1C  A
    2Z 1X 1B 1C 2A  Z
    1X 1B 1C 2A 1Z  X
    1B 1C 2A 1Z     B
    1C 2A 1Z        
*/
        map<char, int> lastCycle;
        map<char, int> freq;
        priority_queue<pair<int, char>> pq;
        queue<pair<int, char>> cooldown;
        for(auto it: tasks) {
            freq[it]++;
            lastCycle[it] = -1;
        }
        for(auto it: freq) {
            pq.push({it.second, it.first});
        }
        int currCycle = 0;
        while(!pq.empty() || !cooldown.empty()) {
            if(!pq.empty()) {
                char t = pq.top().second;
                int tf = pq.top().first;
                lastCycle[t] = currCycle;
                currCycle++;
                tf--;
                pq.pop();
                if(tf > 0)
                    cooldown.push({tf, t});
            }
            else {
                currCycle++;
            }
            
            if(!cooldown.empty() && currCycle - lastCycle[cooldown.front().second] > n) {
                pq.push(cooldown.front());
                cooldown.pop();
            }
            cout << currCycle << endl;
        }
        return currCycle;
    }
};






