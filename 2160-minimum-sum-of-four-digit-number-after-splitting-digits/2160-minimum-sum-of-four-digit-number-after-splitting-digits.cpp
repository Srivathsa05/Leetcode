class Solution {
public:
    int minimumSum(int num) {
        int sum=0;
        int n=0;
        vector<int>digits;
        int temp=num;
        while(temp>0)
        {
            digits.push_back(temp%10);
            temp/=10;
            n++;
        }
        sort(digits.begin(),digits.end());
        sum+=digits[0]*10+digits[n-1];
        sum+=digits[1]*10+digits[n-2];
    return sum;
    }
};