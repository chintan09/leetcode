#include <cmath>
#include <iostream>

class Solution {
public:
	bool isPowerOfThree(int n) {
		while (n) {
			if (n % 3 != 0) {
				return false;
			}
			if (n == 1 || n == 3) return true;
			n = n/3;
		}
		return false;
	}
};

int main()
{
	Solution s;
	printf("%d \n", s.isPowerOfThree(243));
	printf("%d \n", s.isPowerOfThree(45));
	return 0;
}
