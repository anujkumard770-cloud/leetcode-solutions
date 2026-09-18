class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_map<int, int> array;

        for(int i = 0; i < nums.size(); i++) {

            if(array.find(nums[i]) != array.end()) {
                return true;
            }

            array[nums[i]] = 1;
        }

        return false;
    }
};