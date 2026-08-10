class Solution {
public:
    bool isAnagram(string s, string t) {

        // if(s.size()!=t.size()) return false;

        // unordered_map<char, int> mp;
        // for(char ch : s){
        //     mp[ch]++;
        // }

        // for(char ch : t){
        //     mp[ch]--;
        // }

        // for(auto it : mp){
        //     if(it.second>0){
        //         return false;
        //     }
        // }

        // return true;

        if(s.size() != t.size()) return false;
        vector<int>ans(26, 0);
        for(int i=0; i<s.size(); i++){
            ans[s[i]-'a']++;
        }

        for(int i=0; i<t.size(); i++){
            ans[t[i]-'a']--;
        }

        for(int i=0; i<ans.size(); i++){
            if(ans[i]>0){
                return false;
            }
        }

        return true;
    }
};