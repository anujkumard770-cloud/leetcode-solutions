class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int current;

        for(int i=0; i<nums.size(); i++){
            if (count == 0)
              current = nums[i];
            (current == nums[i]) ? count++ : count--;
        }

        return current;
    }
};