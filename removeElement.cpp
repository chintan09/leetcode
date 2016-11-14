#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        // [ 1 1 2 2 5 5 ]
        // remove all 2s 
        if (!nums.size()) { return nums.size(); }
        
        int end = nums.size() - 1;
        
        for (int i = 0; i < nums.size(); i++) {
            // get the array end index which is not val
            if (end <= i)  { end++; printf("break \n"); goto exit; }
            while (nums[end] == val) {
            	if (end <= i)  { printf("break \n"); goto exit; }
				printf("END -- ");
                end--;
            }
            
            if (nums[i] == val) {
                printf("swapping %d %d %d %d \n", nums[i], i, nums[end], end);
                swap(nums[i], nums[end]);
            }
        }
        
exit:
		printf("SSSSS %d %d \n", nums.size(), end);
        if (end == nums.size() - 1) {
            return nums.size();
        } else {
            return nums.size() - end;
        }
    }   
};

int main()
{
	Solution s;
	vector<int> nums = {  4, 5};
	int ans = s.removeElement(nums, 4);
	printf("size %d \n", ans);
	return 0;
}
