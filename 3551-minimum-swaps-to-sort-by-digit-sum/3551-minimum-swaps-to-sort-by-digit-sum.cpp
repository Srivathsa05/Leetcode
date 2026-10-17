
class Solution {
public:
    int digitSum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<int> sorted = nums;

        sort(sorted.begin(), sorted.end(), [&](int a, int b) {
            int s1 = digitSum(a);
            int s2 = digitSum(b);

            if (s1 == s2)
                return a < b;

            return s1 < s2;
        });

        unordered_map<int, int> pos;

        for (int i = 0; i < n; i++) {
            pos[nums[i]] = i;
        }

        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] != sorted[i]) {
                swaps++;

                int j = pos[sorted[i]];

                pos[nums[i]] = j;
                pos[nums[j]] = i;

                swap(nums[i], nums[j]);
            }
        }

        return swaps;
    }
};
