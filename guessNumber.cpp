// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0

#include "lib/misc.h"

int guess(int num)
{
	static int G = 6;
	if (num == G) {
		return 0;
	} else if (num < G) {
		return -1;
	} else {
		return 1;
	}
}

class Solution {
public:
    int guessNumber(int n) {
        int left = 1, right = n;
        while (left <= right) {
            const auto mid = left + (right - left) / 2;
            if (guess(mid) <= 0) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};


int main()
{
	Solution s;
	s.guessNumber(10);
	return 0;
}
