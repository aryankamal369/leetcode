class Solution {
public:
    bool search(vector<int>& nums, int k) {
        int i = 0, j = nums.size()-1;
        while(i<=j){
            int mid = (i+j)/2;
            if(nums[mid]==k) return true;
            if(nums[i]==nums[mid] && nums[mid]==nums[j]){
                i++, j--;
                continue;
            }

            if(nums[i]<=nums[mid]){
                if(nums[i]<=k && nums[mid]>=k){
                    j = mid-1;
                }
                else{
                    i = mid+1;
                }
            }
            else{
                if(nums[mid]<=k && nums[j]>=k){
                    i = mid+1;
                }
                else{
                    j = mid-1;
                }
            }
        }

        return false;
    }
};