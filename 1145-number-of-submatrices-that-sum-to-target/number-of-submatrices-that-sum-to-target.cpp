class Solution {
public:
    int subarraySum(vector<int>& arr, int target){
        unordered_map<int, int> mp;
        mp[0] = 1;
        int prefixSum = 0, count = 0;
        for(int num:arr){
            prefixSum += num;
            if(mp.find(prefixSum - target) != mp.end()){
                count += mp[prefixSum - target];
            }
            mp[prefixSum]++;
        }
        return count;
    }

    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int ans = 0;
        for(int left=0; left<n; left++){
            vector<int>arr(m, 0);
            for(int right=left; right<n; right++){
                for(int row=0; row<m; row++){
                    arr[row] += matrix[row][right];
                }

                ans += subarraySum(arr, target);
            }
        }
        return ans;
    }
};