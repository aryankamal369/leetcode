class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int total = 0;
        for(int it:nums){
            total += it;
        }

        int sum1 = 0;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            int sum2 = total - sum1 - nums[i];
            ans.push_back(abs(sum2-sum1));
            sum1 += nums[i];
        }

        return ans;
    }
};