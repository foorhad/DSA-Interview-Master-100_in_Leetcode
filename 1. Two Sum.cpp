//problem link : https://leetcode.com/problems/two-sum/
//Time complesxity : o(nlogn)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]] = i;
        }
        for(int i=0;i<nums.size();i++){
            int x = target - nums[i];
            if(mp[x]!=0  && i!=mp[x]){
                v.push_back(i);
                v.push_back(mp[x]);
                break;
            }
        }

    return v;
    }
};
