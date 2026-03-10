class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> mpp;
        int n=nums.size();
        int a=0,rem=0;

        for(int i=0;i<n;i++)
        {
            a=nums[i];
            rem=target-a;
            if(mpp.find(rem)!=mpp.end())
            {
                return {i,mpp[rem]};
            }
            mpp[a]=i;

        }
        return {};
        
    
    }
};