
#include "lib/misc.h"
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int max = nums[0];
        int sub_sum = numeric_limits<int>::min();
        for (auto const& n : nums) {
            
			printf("sub sum %d \n", sub_sum);
            if (n > sub_sum && sub_sum < 0) {
                sub_sum = n;
                printf("setting sub_sum %d \n", n);
                max = std::max(max, sub_sum);
                continue;
            }
            
           if (sub_sum + n >= 0) {
                sub_sum += n;
                max = std::max(max, sub_sum);
           } else {
               sub_sum = numeric_limits<int>::min();
           }
           
        }
        return max;
    }
};


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
		auto max_elem = *std::max_element(nums.begin(), nums.end());
		if (max_elem < 0 ) return max_elem;

		int global_max = numeric_limits<int>::min();
		int local_max = 0;
        for (auto const& n : nums) {
			local_max = max(0, local_max + n);
			global_max = max(global_max, local_max);  
        }
        return global_max;
    }
};



int main()
{
	Solution s;
	//vector<int> v = { -2, -1 };
	vector<int> v = {-2,1,-3,4,-1,2,1,-5,4};
	auto ans = s.maxSubArray(v);
	printf("ans %d \n", ans);
	return 0;
}
