class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string str = "";
        for(int i = 0; i < n; i++){
            if(isalnum(s[i])){
                str += tolower(s[i]);
            }
        }
        int m = str.length();
        for(int i = 0; i < m/2; i++){
            if(str[i] != str[m-i-1]){
                return false;
            }
        }
        return true;
    }
};
