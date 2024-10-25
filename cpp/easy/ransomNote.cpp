#include <unordered_map>

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> magazineCharacters;
        
        for (int i = 0; i < magazine.length(); i++) {
            magazineCharacters[magazine[i]]++;
        }

        for (int i = 0; i < ransomNote.length(); i++) {
            if (magazineCharacters[ransomNote[i]] > 0) {
                magazineCharacters[ransomNote[i]]--;
            }

            else {
                return false;
            }

            
        }

        return true;

    }
};