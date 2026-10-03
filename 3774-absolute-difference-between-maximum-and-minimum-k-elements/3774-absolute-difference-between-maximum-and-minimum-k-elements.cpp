class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int bsum=0,ssum=0;
        int n=nums.size();
        for(int i=0;i<k;i++){
            ssum+=nums[i];
            bsum+=nums[n-1-i];
        }
        return abs(bsum-ssum);
    }
};