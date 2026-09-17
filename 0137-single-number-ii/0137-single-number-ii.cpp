class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for(int bitcount = 0; bitcount < 32; bitcount++) {
            int cnt = 0;

            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] & (1 << bitcount))
                    cnt++;
            }

            if(cnt % 3 != 0)
                ans = ans | (1 << bitcount);
        }

        return ans;
    }
};