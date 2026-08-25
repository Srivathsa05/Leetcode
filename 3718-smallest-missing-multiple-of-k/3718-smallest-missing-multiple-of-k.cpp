class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>hash;
        for(int n:nums)
        hash.insert(n);
        int i=1;
        while(true){
            if(!hash.contains(k*i))
            return k*i;
            i++;
        }
    }
};