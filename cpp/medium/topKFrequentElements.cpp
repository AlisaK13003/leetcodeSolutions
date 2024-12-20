class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> freqElements;
        vector<int> result;

        for (int i : nums) {
            freqElements[i]++;
        }



        for (int i = 0; i < k; i++) {
            int maxFrequency = 0;
            int maxElement = 0;

            for (const auto& pair : freqElements) {
                if (pair.second > maxFrequency) {
                    maxFrequency = pair.second;
                    maxElement = pair.first;
                }
            }

            result.push_back(maxElement);
            freqElements.erase(maxElement);
        }

        return result;

    }
};