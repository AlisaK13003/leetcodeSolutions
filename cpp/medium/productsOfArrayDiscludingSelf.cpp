class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {



        int totalProduct = 1;
        int totalZeros = 0;

        for (int i : nums) {
            if (i != 0) {
                totalProduct *= i;
            }
            else {
                totalZeros++;
            }
        }

        vector<int> result(nums.size(), 0);

        for (int i = 0; i < nums.size(); i++) {
            if (totalZeros > 1) {
                result[i] = 0;
            }

            else if (totalZeros == 1) {
                if (nums[i] == 0) {
                    result[i] = totalProduct;
                }
                else {
                    result[i] = 0;
                }
            }

            else {
                result[i] = totalProduct / nums[i];
            }
        }

        return result;

    }
};
