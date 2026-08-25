class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> hash(26,0);
        for(char c:s)
        hash[c-'a']++;
        for(char c:t)
        hash[c-'a']--;
        int sum=0;
        for(int n:hash)
        sum+=abs(n);
        return sum/2;
    }
};