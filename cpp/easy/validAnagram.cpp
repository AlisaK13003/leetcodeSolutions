class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length()) {
            return false;
        }

        vector<int> anagram(26, 0);

        for (int i = 0; i < s.length(); i++) {

            anagram[s[i] - 'a']++;
            anagram[t[i] - 'a']--;

        }

        for (int c : anagram) {
            if (c != 0) {
                return false;
            }
        }

    return true;
    
    }
};