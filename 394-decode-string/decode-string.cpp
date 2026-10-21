class Solution {
public:
    string decodeString(string s) {
        stack<char> st1;
        stack<int> st2;
        int num = 0;
        for(char ch:s){
            if(ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9'||ch=='0'){
                num = num * 10 + (ch-'0');
            }
            else{
                if (ch == '[') {
                    st2.push(num);
                    num = 0;
                    st1.push(ch);
                }
                else if (ch != ']') {
                    st1.push(ch);
                }
                else{
                    string st = "";
                    while(st1.top()!='['){
                        st += st1.top();
                        st1.pop();
                    }
                    st1.pop();
                    reverse(st.begin(), st.end());
                    string str = "";
                    int n = st2.top();
                    st2.pop();
                    while(n!=0){
                        str += st;
                        n--;
                    }

                    for(char it:str){
                        st1.push(it);
                    }
                }
            }
        }

        string ans = "";
        while(!st1.empty()){
            ans += st1.top();
            st1.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};