class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int xorr = 0;
        bool nonZero = false;

        for(int num : nums) {
            xorr ^= num;

            if(num != 0) {
                nonZero = true;
            }
        }

        if(xorr != 0) {
            return n;
        }

        if(nonZero) {
            return n - 1;
        }

        return 0;
    }
};