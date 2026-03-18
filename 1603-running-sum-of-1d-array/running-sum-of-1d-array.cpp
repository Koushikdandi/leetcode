class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i=0,sum=0;
        for(int j=0;j<nums.size();j++)
        {
            sum+=nums[j];
            nums[i]=sum;
            i++;
        }
        return nums;
        
    }
};