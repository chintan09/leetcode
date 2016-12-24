#include "lib/misc.h"


class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        unordered_map<char, vector<char>> mapping = {{ '1', { '1' } }, 
                                                    { '2' , { 'a', 'b', 'c' }}, 
                                                    { '3', {'d', 'e', 'f' } },
                                                    { '4', {'g', 'h', 'i' } },
                                                    { '5', {'j', 'k', 'l' } },
                                                    { '6', {'m', 'n', 'o' } },
                                                    { '7', {'p', 'q', 'r', 's' } },
                                                    { '8', {'t', 'u', 'v' } },
                                                    { '9', {'w', 'x', 'y', 'z' } },
                                                    { '0', {'0'} },
                                                    };
		std::reverse(std::begin(digits), std::end(digits));

		for (const auto &c : digits) {
			vector<string> r = result;
			result.clear();


			auto letters = mapping[c];

			for (char l : letters) {
				if (r.empty()) {
					string i(1, l);
					result.push_back(i);
				} else {
					for (const auto &str : r) {
						result.push_back(l + str); 
					}
				}
			}
		}

        return result;
    }
};


int main()
{
	Solution s;
	auto res = s.letterCombinations("3434323");
	for (const auto &x  : res) {
		printf("%s \n", x.c_str());
	}
	return 0;
}
