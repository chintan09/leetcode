
#include "lib/misc.h"

class Solution {
public:
    int longestPalindrome(string s) {
		unordered_map<char, int> hash;
		for (char c : s) {
			hash[c]++;
		}

		int odd_set = 0, p_len = 0;

		for (auto e : hash) {
			if (e.second % 2) {
				if (!odd_set) {
					odd_set = 1;
					p_len += e.second;
				} else {
					p_len += e.second - 1;
				}
			} else {
				p_len += e.second;
			}
		}
		return p_len;
    }
};

int main()
{
	Solution s;
	printf("%d \n", s.longestPalindrome("aaabbccc"));
	return 0;
}
