class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        map<int ,int>mp;
        int a=0,rem=0;
        for(int i=0;i<nums.size();i++)
        {
            a=nums[i];
            rem=target-a;
            if(mp.find(rem)!=mp.end())
            {
                return {i,mp[rem]};
            }
            mp[a]=i;
        }
        return {};
        
    
    }
};