class Solution {
private:
    bool isAnagram(const string& r, const string& s) {
        if (r.size() != s.size())
            return false;

        vector<int> hash(26, 0);

        for (char c : r)
            hash[c - 'a']++;

        for (char c : s)
            hash[c - 'a']--;

        for (int n : hash) {
            if (n != 0)
                return false;
        }

        return true;
    }

public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>> ans;
        vector<bool> used(n, false);

        for (int i = 0; i < n; i++) {
            if (used[i])
                continue;

            vector<string> group;
            group.push_back(strs[i]);
            used[i] = true;

            for (int j = i + 1; j < n; j++) {
                if (!used[j] && isAnagram(strs[i], strs[j])) {
                    group.push_back(strs[j]);
                    used[j] = true;
                }
            }

            ans.push_back(group);
        }

        return ans;
    }
};