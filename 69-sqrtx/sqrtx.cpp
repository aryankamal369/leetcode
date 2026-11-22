class Solution {
public:
    int mySqrt(int x) {
        int i=0, j = x;
        int ans = 0;
        while(i<=j){
            long long mid = (i+j)/2;
            long long val = mid*mid;
            if(val <= x){
                ans = mid;
                i = mid+1;
            }
            else{
                j = mid-1;
            }
        }

        return ans;
    }
};