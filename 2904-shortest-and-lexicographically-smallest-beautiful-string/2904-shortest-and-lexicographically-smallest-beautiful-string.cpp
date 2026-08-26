class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        int l = 0;
        int ones = 0;
        
        string ans = "";
        int minLen = INT_MAX;

        for (int r = 0; r < n; r++) {
            if (s[r] == '1')
                ones++;

            while (ones > k) {
                if (s[l] == '1')
                    ones--;
                l++;
            }

            if (ones == k) {
                
                while (l <= r && s[l] == '0')
                    l++;

                int len = r - l + 1;
                string curr = s.substr(l, len);

                if (len < minLen ||
                    (len == minLen && curr < ans)) {
                    minLen = len;
                    ans = curr;
                }
            }
        }

        return ans;
    }
};