class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0, count2 = 0;
        int maj1 = NULL, maj2 = NULL;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==maj1){
                count1++;
            }
            else if(nums[i]==maj2){
                count2++;
            }
            else if(count1 == 0){
                maj1 = nums[i];
                count1 = 1;
            }
            else if(count2 == 0){
                maj2 = nums[i];
                count2 = 1;
            }
            else{
                count1--;
                count2--;
            }
        }

        vector<int> result;
        int freq1 = 0, freq2 = 0;
        for(int &num : nums){
            if(num==maj1){
                freq1++;
            }
            else if(num==maj2){
                freq2++;
            }
        }

        int n = nums.size();
        if(freq1 > floor(n/3)){
            result.push_back(maj1);
        }
        if(freq2>floor(n/3)){
            result.push_back(maj2);
        }

        return result;
    }
};