/* 
Median is the middle value in an ordered integer list. 
If the size of the list is even, there is no middle value. So the median is the mean of the two middle value.

Examples: 
[2,3,4] , the median is 3

[2,3], the median is (2 + 3) / 2 = 2.5

Design a data structure that supports the following two operations:

void addNum(int num) - Add a integer number from the data stream to the data structure.
double findMedian() - Return the median of all elements so far.
For example:

add(1)
add(2)
findMedian() -> 1.5
add(3) 
findMedian() -> 2

*/


// Your MedianFinder object will be instantiated and called as such:
// MedianFinder mf;
// mf.addNum(1);
// mf.findMedian();

class MedianFinder {
private:
	vector<int> vec;
public:
	
	// Adds a number into the data structure.
	void addNum(int num) {
		auto it = std::lower_bound( vec.begin(), vec.end(), num);
		vec.insert( it, num);
	}
	
	// Returns the median of current data stream
	double findMedian() {
		ssize_t s = vec.size();
		if (s % 2  == 0) {
			return (vec[s/2] + vec[s/2 -1]) / 2.0;
		} else {
			return vec[s/2];
		}
	}
};

