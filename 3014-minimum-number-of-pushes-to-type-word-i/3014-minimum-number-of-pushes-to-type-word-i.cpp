class Solution {
public:
    int minimumPushes(string word) {
      int n=word.length();
        if(n<=8)
        return n;
        else if(n>8&&n<=16){
            int c=n-8;
            return 8+(c*2);
        }
        else if(n>16&&n<=24)
        {
            int c=n-16;
            return 24+(c*3);
        }
        else
        {
            int c=n-24;
            return 48+(c*4);
        }return -1;
    }
}; 