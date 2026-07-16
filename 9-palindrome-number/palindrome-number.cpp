class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        string t=s;
        if(x<0)
        {
        return false;
        }

        reverse(s.begin(),s.end());
        if(t==s)
        
        return true;
        
        return false;
        
        
    }
};