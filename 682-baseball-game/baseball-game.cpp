class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for (auto ch : operations) {
            if (st.empty() && (ch=="+" || ch=="D" || ch=="C")) {
                continue;
            } else {

                if (ch == "C") {
                    st.pop();
                } else if (ch == "D") {
                    st.push(2 * st.top());
                } else if (ch == "+") {
                    int temp = st.top();
                    st.pop();
                    int sum = temp+st.top();
                    st.push(temp);
                    st.push(sum);
                } else {
                    st.push(stoi(ch));
                }
            }
        }

        int ans = 0;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};