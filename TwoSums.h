/*

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

*/


class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		std::map<int, int> m;
		vector<int> ret;
		for (int i = 0; i < nums.size(); i++) {
			m[nums[i]] = i;
		}

		for (int i = 0; i < nums.size(); i++) {
			auto res = m.find(target - nums[i]);
			if (res != m.end() && res->second > i) {
				ret.push_back(i);
				ret.push_back(res->second);
			}
		}
		
		return ret;
	}
};
