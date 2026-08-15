class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int x = 0,zerocount=0;
        bool hasNonZero = false;

        for (int num : nums) {
            x ^= num;
            if (num != 0)
                hasNonZero = true;
            else zerocount++;
        }

        if (x != 0)
            return n;
        
        if(zerocount==nums.size())
        return 0;

        if (hasNonZero)
            return n - 1;

        return 0;
    }
};