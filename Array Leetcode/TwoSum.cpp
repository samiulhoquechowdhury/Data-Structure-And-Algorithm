/*
Two Sum
Problem: Given an array of integers, return indices of the two numbers such that they add up to a specific target.

Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1] (because nums[0] + nums[1] = 9)

++++++++++solution submitted on leetcode:+++++++++

*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i};
            }

            num_map[nums[i]] = i;
        }
        return {};
    }
};

