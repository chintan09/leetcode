#include <string>
#include <unordered_map>
#include <utility>
#include <vector>
#include <limits>

// 2 pass solution
// 1 pass involves creatign map as <int, ITERATOR to a list> 
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
		unordered_map<char, pair<int, bool>> map;

		for (int i = 0; i < s.size(); i++) {
			char c = s[i];
			if (map.count()) {
				map[c] = make_pair(i, false);
			} else {
				map[c] = make_pair(i, true);
			}
		}
		int index = numeric_limits<int>::max();
		for (auto i : map) {
			if (i.second.second == true && i.second.first < index) {
				index = i.second.first;
			}
		}
		return (index == numeric_limits<int>::max()) ? -1 : index;
    }
};


int main()
{
	Solution s;
	printf("%d \n", s.firstUniqChar("leetlove"));
	return 0;
}
