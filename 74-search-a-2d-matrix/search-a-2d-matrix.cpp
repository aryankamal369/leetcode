class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        int i = 0, j = n-1;

        while(i <= j){
            int mid1 = i + (j - i)/2;

            if(target >= matrix[mid1][0] && target <= matrix[mid1][m-1]){
                int start = 0, end = m-1;
                while(start <= end){
                    int mid = start + (end - start)/2;
                    if(target==matrix[mid1][mid]){
                        return true;
                    }
                    else if(target < matrix[mid1][mid]){
                        end = mid-1;
                    }
                    else{
                        start = mid+1;
                    }
                }
                break;
            }
            else if(target < matrix[mid1][0]){
                j = mid1 - 1;
            }
            else{
                i = mid1 + 1;
            }
        }

        return false;
    }
};