class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups; // signature string, group

        for (const string& str: strs) {
            string signature = str;
            sort(signature.begin(), signature.end());
            anagramGroups[signature].insert(str);
        }

        vector<vector<string>> result;
        for (const auto& pair : anagramGroups) {
             vector<string> group = (pair.second.begin(), pair.second.end());
             result.push_back(group);
        }

        return result;
        





    }
};