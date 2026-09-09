class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        long long start = 1000;
        long long com = 1;
        while(start <= n){
            long long end = start * 1000 -1;
            long long numbers;
            if(n<end){
                numbers = n-start+1;
            }
            else{
                numbers = end - start + 1;
            }
            ans += numbers*com;
            start *= 1000;
            com++;
        }
        return ans;
        
    }
};