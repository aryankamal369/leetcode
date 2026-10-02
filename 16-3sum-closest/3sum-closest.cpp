class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closestSum = INT_MAX;
        int ans = INT_MAX;
        int n = nums.size();
        for(int i=0; i<n-2; i++){
            for(int j=i+1; j<n-1; j++){
                for(int k=j+1; k<n; k++){
                    int val = nums[i]+nums[j]+nums[k];
                    if(abs(target-val)<closestSum){
                        closestSum = abs(target - val);
                        ans = val;
                    }
                }
            }
        }

        return ans;
    }
};