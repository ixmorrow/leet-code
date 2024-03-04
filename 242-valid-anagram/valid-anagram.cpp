class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> letters;
        for(char c : s){
            letters[c] += 1;
        }

        for(char c : t){
            if(letters.find(c) != letters.end()) {
                letters[c] -= 1;
                if(letters.at(c) == 0)
                    letters.erase(c);
            } else return false;
        }

        if(!letters.empty()) return false;
        else return true;
    }
};