 
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return 1;
        int mx = 0, mn = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[mx])
                mx = i;
            if (nums[i] < nums[mn])
                mn = i;
        }
        int left = max(mx, mn) + 1;
        int right = n - min(mx, mn);
        int both = min(mx, mn) + 1 + n - max(mx, mn);
        return min({left, right, both});
    }
};

