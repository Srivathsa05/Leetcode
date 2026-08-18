class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        int n = nums.size();
        for (int l = 0; l <= n - k; l++) {
            unordered_set<int> seen;
            for (int i = l; i < l + k; i++) {
                seen.insert(nums[i]);
            }
            for (int x : seen) {
                count[x]++;
            }
        }
        int ans = -1;
        for (auto& [x, freq] : count) {
            if (freq == 1) {
                ans = max(ans, x);
            }
        }
        return ans;
    }
};