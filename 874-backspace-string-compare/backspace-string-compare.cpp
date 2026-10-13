class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        for(char ch:s){
            if(ch != '#'){
                st1.push(ch);
            }else{
                if(st1.empty()){
                    continue;
                }else{
                    st1.pop();
                }
            }
        }

        for(char ch:t){
            if(ch != '#'){
                st2.push(ch);
            }
            else{
                if(st2.empty()){
                    continue;
                }else{
                    st2.pop();
                }
            }
        }

        return st1==st2;
    }
};