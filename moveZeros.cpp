#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
		queue<int> zero_idx;
        for (int i = 0; i < nums.size(); i++) {
			if (nums[i] == 0) {
				zero_idx.push(i);
			} else {
				if (!zero_idx.empty() && i > zero_idx.front()){
					swap(nums[i], nums[zero_idx.front()]);
					zero_idx.pop();
					zero_idx.push(i);
				}
			}
		}
	}
};

int main()
{
	Solution s;
	vector<int> nums = { 0, 1, 0, 3, 12};
	s.moveZeroes(nums);
	for (int i : nums) {
		printf("i %d \n", i);
	}
	return 0;
}
