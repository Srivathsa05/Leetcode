class Solution {
public:
    int countOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2, int rowOff, int colOff) {
        int c = 0;
        int n = img1.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int bi = i + rowOff;
                int bj = j + colOff;

                if (bi >= 0 && bi < n && bj >= 0 && bj < n) {
                    if (img1[i][j] == 1 && img2[bi][bj] == 1)
                        c++;
                }
            }
        }

        return c;
    }

    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        int maxoverlap = 0;

        for (int rowOff = -n + 1; rowOff < n; rowOff++) {
            for (int colOff = -n + 1; colOff < n; colOff++) {
                int count = countOverlap(img1, img2, rowOff, colOff);
                maxoverlap = max(maxoverlap, count);
            }
        }

        return maxoverlap;
    }
};