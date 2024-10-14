proublem link : https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/?utm_source=instabyte.io&utm_medium=referral&utm_campaign=interview-master-100

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int sz = nums.size();
        for(int i=0;i<sz-1;){
            if(nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i);
                sz--;
            }
            else i++;
        }
    return nums.size();
    }
};
