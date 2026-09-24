class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long sum=0;
        int n=skill.size();
        int l=0,r=n-1;
        sort(skill.begin(),skill.end());
        int total=skill[0]+skill[n-1];
        while(l<r){
            if(skill[l]+skill[r]!=total)
            return -1;
            sum+=skill[l]*skill[r];
            l++;
            r--;
        }return sum;
    }
};