#include<vector>


using namespace std;
class NumArray {
public:
    NumArray(vector<int> &nums) {
		int sum = 0;
    	for (int i = 0; i < nums.size(); i++) {
			sum += nums[i];
			sum_array.emplace_back(sum);
		} 
    }

    int sumRange(int i, int j) {
		if (i) {
			return sum_array[j] - sum_array[i-1];
		} else {
			return sum_array[j];
		}
    }

private:
	vector<int> sum_array;
};

int main()
{
	vector<int> nums = { -2, 0 ,3 , -5, 2, -1};
	NumArray n(nums);
	printf("0,2 %d \n", n.sumRange(0,2));
	printf("2,5 %d \n", n.sumRange(2,5));
	return 0;
}
