class Solution {
public:
    int digitSum(int n){
        int sum = 0;
        while(n!=0){
            int ld = n%10;
            sum += ld;
            n /= 10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int mini = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            if(i==digitSum(nums[i])){
                return min(mini, i);
            }
        }
        return -1;
    }
};