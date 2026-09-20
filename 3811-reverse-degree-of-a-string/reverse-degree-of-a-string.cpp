class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        int ans = 0;
        for(int i=0; i<n; i++){
            ans += (27- (s[i]-'a'+1))*(i+1);
        }
        return ans;
    }
};