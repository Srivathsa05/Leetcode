class Solution {
public:
    bool canAliceWin(int n) {
        int i=10;
        while(true){
            if(n-i<0){
                if(i%2==0)
                return false;
                else return true;
            }
            n-=i;
            i--;
        }
        return true;
    }
};