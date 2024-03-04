class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> letters;

        string sorted_s = s;
        string sorted_t =t;

        sort(sorted_s.begin(), sorted_s.end());
        sort(sorted_t.begin(), sorted_t.end());

        if(sorted_s == sorted_t) return true;
        else return false;
    }
};