class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = INT_MIN;
        for(int i=0; i<candies.size(); i++){
            maxi = max(maxi, candies[i]);
        }

        vector<bool> ans;
        for(int i=0; i<candies.size(); i++){
            int x = candies[i] + extraCandies;
            if(x >= maxi){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
            // maxi = max(maxi, x);
        }
        return ans;
    }
};