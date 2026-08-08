class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for(int it : nums){
            total += it;
        }

        int sum1 = 0;
        for(int i=0; i<nums.size(); i++){
            int sum2 = total-nums[i]-sum1;
            if(sum1==sum2){
                return i;
            }
            sum1 += nums[i];
        }
        return -1;
    }
};