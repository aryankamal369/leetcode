class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // unordered_map<int, int> mp;
        // for(int it : nums){
        //     mp[it]++;
        // }
        // for(auto it:mp){
        //     if(it.second==1){
        //         return it.first;
        //     }
        // }
        // return 0;


        int xorr = nums[0];
        for(int i=1; i<nums.size(); i++){
            xorr = xorr ^ nums[i];
        }
        return xorr;
    }
};