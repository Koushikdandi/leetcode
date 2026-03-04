class Solution {
public:
    int reverse(int x) {
        int digit=0;
        long long rev=0;
        while(x)
        {
            digit=x%10;
            rev=rev*10+digit;
            if(rev<INT_MIN || rev>INT_MAX)
            {
                return 0;
            }
            x=x/10;
        }
        return rev;
        
    }
};