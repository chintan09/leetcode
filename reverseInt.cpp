#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
	int reverse(int x) {
		int result = 0;
		bool neg = false;
		if (x < 0) {
			neg = true;
			x = -x;
		}

		while (x) {
			auto prev = result;
			int d = x % 10;
			result *= 10;
			result += d;
			
			// special case to make sure we're not overflowing
            if (result / 10 != prev) {
                result = 0;
                break;
            }
			
			x /= 10;
		}

		return neg == true ? -result : result;
	}
};

int main()
{
	Solution s;
	auto i = s.reverse(1534236469);
	printf("ans %d \n", i);
	return 0;
}
