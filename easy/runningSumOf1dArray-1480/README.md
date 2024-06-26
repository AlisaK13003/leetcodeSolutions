Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

Example 1:

<code>Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].</code>

Example 2:

<code>Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].</code>

Example 3:

<code>Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]</code>
 

Constraints:

1 <= nums.length <= 1000

-10^6 <= nums[i] <= 10^6
