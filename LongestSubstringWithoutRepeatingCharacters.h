/*

Given a string, find the length of the longest substring without repeating characters.

Examples:

Given "abcabcbb", the answer is "abc", which the length is 3.
Given "bbbbb", the answer is "b", with the length of 1.
Given "pwwkew", the answer is "wke", with the length of 3. 
Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

*/

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		
		int max_substr = 0;
		// loop over all elems
		for (int i = 0; i < s.size(); i++) {
			
			unordered_map<char, int> hash_map;

			// internal substr loop
			for (int ii = i; ii  < s.size(); ii++) {
				
				auto it = hash_map.find(s[ii]);
				
				if (it == hash_map.end()) {
					hash_map[s[ii]] = 1;
				} else {
					break;
				}
				
				if (hash_map.size()  > max_substr) {
					max_substr = static_cast<int>(hash_map.size());
				}
				
				// FIXME 
                if (max_substr == 95) break;
				
			}	// internal loop
			
		}
		return max_substr;
	}
};
