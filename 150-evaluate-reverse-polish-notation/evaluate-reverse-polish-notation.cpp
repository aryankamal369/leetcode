class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto ch : tokens){
            if(ch=="+"){
                int first = st.top();
                st.pop();
                int second = st.top();
                st.pop();
                st.push((first)+(second));
            }
            else if(ch=="-"){
                int first = st.top();
                st.pop();
                int second = st.top();
                st.pop();
                st.push((second)-(first));
            }
            else if(ch=="*"){
                int first = st.top();
                st.pop();
                int second = st.top();
                st.pop();
                st.push((first)*(second));
            }
            else if(ch=="/"){
                int first = st.top();
                st.pop();
                int second = st.top();
                st.pop();
                st.push((second)/(first));
            }
            else{
                st.push(stoi(ch));
            }
        }

        return st.top();
    }
};