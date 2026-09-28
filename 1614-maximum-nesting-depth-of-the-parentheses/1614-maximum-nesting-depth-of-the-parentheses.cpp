class Solution {
public:
    int maxDepth(string s) {
        int maxi=INT_MIN;
        int count=0;
        for(char c:s){
            if(c=='(')
            {
                count++;
                maxi=max(count,maxi);
            }
            if(c==')')
            count--;
        }

        return max(0,maxi);

    }
};