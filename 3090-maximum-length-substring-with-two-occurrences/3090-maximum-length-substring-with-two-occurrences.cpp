class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l = 0, r = 0, maxi = 0;
        int hash[256] = {};

        while (r < s.length()) {
            hash[s[r]]++;

            while (hash[s[r]] > 2) {
                hash[s[l]]--;
                l++;
            }

            maxi = max(maxi, r - l + 1);
            r++;
        }

        return maxi;
    }
};