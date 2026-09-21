class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        unordered_map<int, set<int>> mp;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0; i<n; i++){
            for(int j=m-1; j>=0; j--){
                mp[i-j].insert(matrix[i][j]);
            }
        }

        for(auto it:mp){
            if(it.second.size() > 1){
                return false;
            }
        }

        return true;
    }
};