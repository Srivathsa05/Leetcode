class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<nums.size()/2;i++){
            sum+=nums[n/2]-nums[i];
        }for(int i=n/2;i<n;i++){
            sum+=nums[i]-nums[n/2];
        }
        return sum;
    }
};