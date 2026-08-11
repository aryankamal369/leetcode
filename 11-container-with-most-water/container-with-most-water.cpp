class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1;
        int maxwater = -1;
        while(i<j){
            int mini = min(height[i], height[j]);
            maxwater = max(maxwater, (j-i) * mini);
            if(height[i]<=height[j]){
                i++;
            }
            else{
                j--;
            }
        }

        return maxwater;
    }
};