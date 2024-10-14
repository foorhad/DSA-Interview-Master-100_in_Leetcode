probllem Link : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/?utm_source=instabyte.io&utm_medium=referral&utm_campaign=interview-master-100


class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[0];
    }
};
