#include "lib/misc.h"

class Solution {
public:
    bool isUgly(int n) {
        if (n == 1) return true;
        vector<int> ugly = { 2, 3, 5 };
        for (auto i : ugly) {
            while (n % i == 0)  {
                n /= i;
            }
        }
        return n == 1;
    }

    int nthUglyNumber(int n) {
        int count = 0;
        int nth = 0;
        for (int i = 1; ; i++) {
            if (isUgly(i)) {
				printf("true %d, count %d  \n", i, count);
                if (++count == n) {
                    nth = i;
                    break;
                }
            }
        }
        return nth;
    }
};

int main()
{
	Solution s;
	auto ans = s.nthUglyNumber(322);
	printf("ans - %d \n", ans);

	return 0;
}
