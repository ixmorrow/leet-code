class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int right = 0;
        int max_len = 0;
        unordered_set<char> letters;

        for(int left = 0; left < s.size(); left++){

            while(letters.find(s[right]) == letters.end() && right < s.size()){
                letters.insert(s[right]);
                int curr_len = right - left + 1;
                max_len = max(max_len, curr_len);
                right++;
            }

            letters.erase(s[left]);
        }

        return max_len;
    }
};