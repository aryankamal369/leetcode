class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefProd(n);
        prefProd[0] = 1;
        for(int i=0; i<n-1; i++){
            prefProd[i+1] = prefProd[i]*nums[i];
        }

        vector<int> suffProd(n);
        suffProd[n-1] = 1;
        for(int i=n-1; i>0; i--){
            suffProd[i-1] = suffProd[i]*nums[i];
        }

        vector<int> ans(n);
        for(int i=0; i<n; i++){
            ans[i] = prefProd[i]*suffProd[i];
        }

        return ans;
    }
};