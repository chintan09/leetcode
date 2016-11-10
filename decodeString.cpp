/*
Given an encoded string, return it's decoded string.

The encoding rule is: k[encoded_string], where the encoded_string inside the square brackets is being repeated exactly k times. Note that k is guaranteed to be a positive integer.

You may assume that the input string is always valid; No extra white spaces, square brackets are well-formed, etc.

Furthermore, you may assume that the original data does not contain any digits and that digits are only for those repeat numbers, k. For example, there won't be input like 3a or 2[4].

Examples:

s = "3[a]2[bc]", return "aaabcbc".
s = "3[a2[c]]", return "accaccacc".
s = "2[abc]3[cd]ef", return "abcabccdcdcdef".
*/


#include <string>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Solution {
public:
	string decodeString(string s) {
		string digit_s, output, temp;
		stack<int> digits;
		stack<string> repeats;
		for (char c : s) {

			if (c >= '0' && c <= '9') {
				digit_s.push_back(c);
				continue;
			}

			if (c == '[') {
				if (temp.size()) {
					if (!digits.size()) {
						output += temp;
					} else {
						repeats.push(temp);
					}
					temp.clear();
				}
				digits.push(stoi(digit_s));
				digit_s.clear();
				
				continue;
			}
				
			if (c == ']') {
				string ss;
				if (digits.size() && (digits.size() != repeats.size())) {
					ss = temp;
				} else if (repeats.size()) {
					ss = repeats.top() + temp;
					repeats.pop();
				} else {
					break;
				}
				string decoded;
				for (int i = 0; i < digits.top(); i++) {
					decoded += (ss);	
				}
				temp = decoded; 
				digits.pop();
				continue;
			}
			
			if (digits.size()) {
				temp.push_back(c);
			} else {
				output.push_back(c);
			}

		}

		if (temp.size()) { 
			output += temp; 
		}
		return output;
	}
};


int main()
{
	Solution s;
	printf("%s \n", s.decodeString("2[ab3[xy]]").c_str());
	printf("%s \n", s.decodeString("3[a]2[bc]").c_str());
	return 0;
}
