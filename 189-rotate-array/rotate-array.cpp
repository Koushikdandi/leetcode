class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        int d=k%n;
        reverse(nums.begin(),nums.begin()+(n-d));
        reverse(nums.begin()+(n-d),nums.end());
        reverse(nums.begin(),nums.end());
        
    }
};