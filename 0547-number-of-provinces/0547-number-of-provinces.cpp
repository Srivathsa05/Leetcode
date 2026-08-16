class Solution {
public:
    void dfs(int i, vector<vector<int>>& adjL, vector<int>& visited) {
        visited[i] = 1;

        for (auto it : adjL[i]) {
            if (!visited[it]) {
                dfs(it, adjL, visited);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int m = isConnected.size();

        vector<vector<int>> adjL(m);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                if (isConnected[i][j] == 1 && i != j) {
                    adjL[i].push_back(j);
                }
            }
        }

        vector<int> visited(m, 0);
        int c = 0;

        for (int i = 0; i < m; i++) {
            if (!visited[i]) {
                c++;
                dfs(i, adjL, visited);
            }
        }

        return c;
    }
};