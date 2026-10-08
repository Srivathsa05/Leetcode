class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int count=0;
        for(char c:s)
        {
            if(c==')')count--;
            if(count!=0)ans.push_back(c);
            if(c=='(')
            count++;
        }
        return ans;
    }
};