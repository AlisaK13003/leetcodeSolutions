class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> integers;

        for (int i = 0; nums.size(); i++) {

            int complement = target - nums[i];

            if (integers.find(complement) != integers.end()) {
                return {integers[complement], i};
            }

            integers[nums[i]] = i;

        }

        return {};
    }
};