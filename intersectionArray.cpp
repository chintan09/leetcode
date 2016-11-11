#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;
class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		unordered_set<int> input, output;

		for (const int& i : nums1) {
			input.insert(i);
		}

		for (const int& i : nums2) {
			if (input.find(i) != input.end()) {
				output.insert(i);
			}
		}
		
		vector<int> v(output.begin(), output.end());
		return v;
    }

    int majorityElement(vector<int>& nums) {
		pair<int, int> p;
		unordered_map<int, int> map;

		for (const int& i: nums) {
			map[i] += 1;
		}    

		for (auto i : map) {
			if (i.second > p.second ) {
				p = i;
			}
		}
		return p.first;
    }
	
};

int main()
{
	Solution s;
	vector<int> a = { 1, 2, 3, 1, 1, 2}, b = { 1, 2};
	auto v = s.intersection(a, b);

	auto val = s.majorityElement(a);
	printf("majorityElem %d \n", val);
	return 0;
}
