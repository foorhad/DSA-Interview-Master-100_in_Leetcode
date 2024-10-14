//problem link : https://leetcode.com/problems/valid-palindrome/
class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.size();i++)s[i] = tolower(s[i]);
        string str;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9'){
                str+=s[i];
            }
        }

        string str1 = str;
        reverse(str1.begin(), str1.end());
        return str1==str;
    
    }
};
