class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answers;
        unordered_map<string, vector<string>> sorted_strings;

        for(string str : strs){
            string sorted = str;
            sort(sorted.begin(), sorted.end());
            sorted_strings[sorted].push_back(str);
        }

        for(auto& pair : sorted_strings){
            answers.push_back(pair.second);
        }

        return answers;
    }
};