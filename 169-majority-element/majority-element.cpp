class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        int freq = 0;
        for(auto it:mp){
            if(freq<it.second && it.second > n/2){
                freq = it.first;
            }
        }
        return freq;
    }
};