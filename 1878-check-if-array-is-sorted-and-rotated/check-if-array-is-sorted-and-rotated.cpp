class Solution {
public:
    bool isSort(vector<int> &arr){
        for(int i=1; i<arr.size(); i++){
            if(arr[i]>=arr[i-1]){

            }
            else{
                return false;
            }
        }
        return true;
    }

    void rotate(vector<int> &arr){
        int n = arr.size();
        int temp = arr[n-1];
        for(int i=n-1; i>=1; i--){
            arr[i] = arr[i-1];
        }
        arr[0] = temp;
    }

    bool check(vector<int>& nums) {
        int n = nums.size();
        while(n!=0){
            if(isSort(nums)){
                return true;
            }
            else{
                rotate(nums);
            }
            n--;
        }
        return false;
    }
};