class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {

        int freq[26] = {0};

        for (char task : tasks) {
            freq[task - 'A']++;
        }

        int maxFreq = 0;

        for (int i = 0; i < 26; i++) {
            maxFreq = max(maxFreq, freq[i]);
        }

        int countMax = 0;

        for (int i = 0; i < 26; i++) {
            if (freq[i] == maxFreq) {
                countMax++;
            }
        }

        int result = (maxFreq - 1) * (n + 1) + countMax;
        return max((int)tasks.size(), result);
    }
};