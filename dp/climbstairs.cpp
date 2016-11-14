class Solution {
public:
    int climbStairs(int n) {
        int num_ways = 0;
        if (!n) return 0;
        if (n == 1) return 1;
        if (n == 2) return 2;
        
        int pre = 2, prepre = 1;
        for (int i = 3 ; i <= n ; i++) {
            num_ways = pre + prepre;
            prepre = pre;
            pre = num_ways;
        }
        return num_ways;
    }
};
