class Solution {
public:
    int findMin(vector<int>& nums) {
        int i=0, j = nums.size()-1;
        int ans = nums[0];
        while(i<=j){
            int mid = (i+j)/2;
            if(nums[mid]<ans){
                ans = nums[mid];
            }
            if(nums[mid]<nums[0]){
                j = mid-1;
            }
            else{
                i = mid+1;
            }
        }
        return ans;
    }
};