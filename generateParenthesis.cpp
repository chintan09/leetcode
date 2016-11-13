#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<string> generateParenthesis(int n) {
		vector<string> combinations;
		string init;
		for (int i = 0; i < 2*n; i++) {
			string s(1, '('), s2(1, ')');
			if (i < n) {
				init += s;
			} else {
				init += s2;
			}
		}

		do {
			if (Solution::is_valid(init)) {
				combinations.push_back(init);
			}
		} while (next_permutation(init.begin(), init.end()));
		
		return combinations;
	}

	bool is_valid(string input) {
		int sum = 0;
		for (auto c : input) {
			if (c == '(') sum++;
			else if (c== ')') sum--;
			if (sum < 0) {
				return false;
			}
		}
		return sum == 0 ? true : false;
	}


};

int main()
{
	Solution s;
	auto v = s.generateParenthesis(5);
	for (auto s : v) {
		printf("%s \n", s.c_str());
	}
	return 0;
}
