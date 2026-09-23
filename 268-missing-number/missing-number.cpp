class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(), arraySum=0;
       for(int i=0; i<nums.size(); i++){
         arraySum += nums[i];
       }

       int total = (n*(n+1))/2;

       return (total - arraySum);
    }
};