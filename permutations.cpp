#include "lib/misc.h"

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>> result;
        sort(nums.begin(), nums.end());
		
		do {
			result.push_back(nums);
		} while (next_permutation(nums.begin(), nums.end()));
        
		printf("length %d \n", result.size());
		return result;
    }
};

int main()
{
	Solution s;
	
	vector<int> nums = { 1, 2, 3};
	s.permute(nums);
	
	return 0;
}