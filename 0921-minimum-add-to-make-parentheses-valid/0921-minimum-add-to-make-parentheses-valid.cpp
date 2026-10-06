class Solution {
public:
    int minAddToMakeValid(string s) {
        int val = 0;
        stack<char> st;

        for(char c : s) {
            if(c == '(') {
                st.push(c);
            }
            else {
                if(st.empty())
                    val++;
                else
                    st.pop();
            }
        }

        while(!st.empty()) {
            val++;
            st.pop();
        }

        return val;
    }
};