#include "lib/misc.h"



class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool carry = false;
        for (auto it = digits.end()-1; ; it--) {
			printf("xxx value %d \n", *it);
            if (*it == 9) {
                *it = 0;
                carry = true;
            } else {
                *it = *it + 1;
                carry = false; break;
            }

			if (it == digits.begin()) break;
        }
        if (carry) {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};

int main()
{
	Solution s;
	vector<int> v = {9};
	auto ans = s.plusOne(v);

	for (const auto&d : ans) {
		printf("d - %d \n", d);
	}
	return 0;
}

