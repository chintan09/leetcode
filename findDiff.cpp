#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
	// create a hash map of string s and then go over t and see if the cahar is present or not
	long long count = 0;
	for (char c : t) {
		count += c;
	}        

	for (char x : s) {
		count -= x;
	}
	return static_cast<char>(count);
    }
};


int main()
{
	Solution s;
	printf(" %c \n", s.findTheDifference("chintan","chintans"));
	printf(" %c \n", s.findTheDifference("aa","aaa"));
	return 0;
}
