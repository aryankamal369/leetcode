class Solution {
public:
    bool isPerfectSquare(int num) {
        int i=1, j=num;
        while(i<=j){
            int mid = i + (j-i)/2;
            if(1LL*mid*mid == num){
                return true;
            }
            else if(1LL*mid*mid > num){
                j = mid-1;
            }
            else{
                i = mid+1;
            }
        }
        return false;
    }
};