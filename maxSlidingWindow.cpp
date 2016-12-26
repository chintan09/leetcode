#include "lib/misc.h"



template <class T, class S, class C>
    S& Container(priority_queue<T, S, C>& q) {
        struct HackedQueue : private priority_queue<T, S, C> {
            static S& Container(priority_queue<T, S, C>& q) {
                return q.*&HackedQueue::c;
            }
        };
    return HackedQueue::Container(q);
}

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
		priority_queue<int, vector<int>> pq(nums.begin(), nums.begin() + k);

		vector<int> result;

		result.push_back(pq.top());

		for (int i = k; i < nums.size(); i++) {
			vector<int> &v = Container(pq);
			std::swap(v[i-k], nums[i]);
			printf("new top %d \n", pq.top());
			result.push_back(pq.top());
		}
		return result;
    }
};

int main()
{
	Solution s;

	vector<int> input = { -6,-10,-7,-1,-9,9,-8,-4,10,-5,2,9,0,-7,7,4,-2,-10,8,7 };
	s.maxSlidingWindow( input, 7);
	return 0;
}
