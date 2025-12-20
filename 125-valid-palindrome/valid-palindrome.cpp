class Solution {
public:
    bool isPalindrome(string s) {
        string result="";
        for(int i=0;i<s.length();i++)
        {
            if(isalnum(s[i])!=0)
            {
                result+=tolower(s[i]);
            }
        }
        int right=result.length()-1,left=0;
        while(right>left)
        {
            if(result[left]!=result[right])
            {
                return 0;
            }
            right--;
            left++;
        }
        return 1;
    }

};