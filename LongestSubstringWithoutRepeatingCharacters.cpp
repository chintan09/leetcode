/*

Given a string, find the length of the longest substring without repeating characters.

Examples:

Given "abcabcbb", the answer is "abc", which the length is 3.
Given "bbbbb", the answer is "b", with the length of 1.
Given "pwwkew", the answer is "wke", with the length of 3. 
Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

*/

#include <iostream>
#include <algorithm>
#include <unordered_set> 
#include <list> 
#include <algorithm>

using namespace std;
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		list<char> l;
		int max_substr = 0;
		for (int i = 0; i < s.size(); i++) {
			const auto c = s[i];
			auto it = find(l.begin(), l.end(), c);
			if (it != l.end()) {
				if (l.size() > max_substr) {
					max_substr = l.size();
				}
				advance(it, 1);
				l.erase(l.begin(), it);
			}
			l.push_back(c);
		}
		return max(static_cast<int>(l.size()), max_substr);
	}
};


int main()
{
	Solution s;
	auto ans = s.lengthOfLongestSubstring("aab");
	printf("%d \n", ans);
	return 0;
}
