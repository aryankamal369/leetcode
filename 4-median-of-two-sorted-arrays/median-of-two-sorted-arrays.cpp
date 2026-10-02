class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        int i=0, j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<=nums2[j]){
                arr.push_back(nums1[i]);
                i++;
            }
            else{
                arr.push_back(nums2[j]);
                j++;
            }
        }

        while(i!=nums1.size()){
            arr.push_back(nums1[i]);
            i++;
        }

        while(j!=nums2.size()){
            arr.push_back(nums2[j]);
            j++;
        }

        int n = arr.size();
        int start = 0, end = n-1;
        double mediun;
        if(n%2!=0){
            int mid = start + (end - start)/2;
            mediun = arr[mid];
        }
        else{
            int mid = start + (end - start)/2;
            mediun = (arr[mid]+arr[mid+1])/2.0;
        }

        return mediun;
    }
};