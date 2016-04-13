#include <string>
#include <vector>
#include <iostream>

using namespace std;
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> output;

	for (int i = 1; i <= n; i++) {
		string t;
		if (i % 3 == 0) {
			t += "Fizz";
		}

		if (i % 5 == 0) {
			t += "Buzz";
		}

		if (!t.size()) {
			t = to_string(i);
		}
		output.push_back(t);
	}
	return output;
    }
};

int main()
{

	Solution s;
	auto a = s.fizzBuzz(15);
	for (const string s : a) {
		printf("%s \n", s.c_str());
	}
	return 0;
}
