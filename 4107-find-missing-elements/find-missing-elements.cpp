class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int temp = nums[0];
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(temp==nums[i]){
                temp++;
            }
            else{
                while(temp!=nums[i]){
                    ans.push_back(temp);
                    temp++;
                }
                temp++;
            }
        }

        return ans;
    }
};