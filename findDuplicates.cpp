#include <vector>

using namespace std;


class Solution {
public:
	vector<int> findDuplicates(vector<int>& nums) {
		vector<int> dup;
		int i = 0;
		while (i < nums.size()) {
			if (nums[i] == i + 1) {
				i++;
			} else {
				swap(nums[i], nums[nums[i]-1]);
			}

		}

		for (const int& i : nums) {
			printf("values %d \n", i);
		}

			
		return dup;
	}
};


int main()
{
	Solution s;
	vector <int> input2 = {5,4,6,7,9,3,10,9,5,6};
	s.findDuplicates(input2);
	return 0;
}
