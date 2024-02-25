class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;

        while(left < right){
            // check that each char is alphanumeric, if not ignore and move pointer forward
            if(!isalnum(tolower(s[left]))){
                left++;
                continue;
            }
            if(!isalnum(tolower(s[right]))){
                right--;
                continue;
            }

            // if each char are not equal, is not palindrome. return false
            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }
            // move left/right pointers
            left++;
            right--;
        }

        return true;
    }
};