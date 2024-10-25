#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> numsMap;

        for (int num : nums) {
            if (numsMap.find(num) != numsMap.end()) {
                return true;
            }

            numsMap.insert(num);
        }

    return false;

    }
};