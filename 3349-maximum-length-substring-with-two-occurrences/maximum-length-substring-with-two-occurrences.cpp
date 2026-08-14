class Solution {
public:
    int maximumLengthSubstring(string s) {
        int i=0, j=0;
        int maxi = 0;
        unordered_map<char, int> mp;
        while(j<s.size()){
            mp[s[j]]++;
            while(mp[s[j]]>2){
                mp[s[i]]--;
                i++;
            }
            maxi = max(maxi, j-i+1);
            j++;
        }

        return maxi;
    }
};