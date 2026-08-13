class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0, count = 0;
        int i=0, j=0;
        while(j<arr.size()){
            sum += arr[j];
            if((j-i+1)==k){
                int avg = sum/k;
                if(avg >= threshold){
                    count++;
                }

                sum -= arr[i];
                i++;
            }
            j++;
        }

        return count;
    }
};