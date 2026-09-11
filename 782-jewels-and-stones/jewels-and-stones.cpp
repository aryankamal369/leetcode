class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> freq;
        for(char ch : stones){
            freq[ch]++;
        }
        int ans = 0;
        for(char ch : jewels){
            ans += freq[ch];
        }
        return ans;
    }
};