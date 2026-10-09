class Solution {
public:
    int minInsertions(string s) {
        int count = 0;
        int n = s.size();
        stack<char> st;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push('(');
            }
            else {
                if (i + 1 < n && s[i + 1] == ')') {
                    i++;  

                    if (!st.empty()) {
                        st.pop();
                    }
                    else {
                        count++;
                    }
                }
                else {
                    count++;
                    if (!st.empty()) {
                        st.pop();
                    }
                    else {
                        count++;
                    }
                }
            }
        }
        count += 2 * st.size();
        return count;
    }
};