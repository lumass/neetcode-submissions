class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int n = heights.size();

        int i = 0, j = n - 1;
        int mxArea = 0;
        int leftMx = heights[0], rightMx = heights[n - 1];
        while(i < j) {
            int currArea = (j - i) * min(heights[i], heights[j]);
            if(currArea > mxArea) {
                mxArea = currArea;
                leftMx = i;
                rightMx = j;
            }
            if(heights[i] <= heights[j]) {
                i++;
            }
            else {
                j--;
            }
        }
        return mxArea;
    }
};
