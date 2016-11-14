class Solution {
public:
    int rob(vector<int>& nums) {
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i%2 == 0) {
                sum1 = max(sum1+nums[i], sum2);
            } else {
                sum2 = max(sum1, sum2+nums[i]);
            }
        }
        return max(sum1, sum2);
    }
};
