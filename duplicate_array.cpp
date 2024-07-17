class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> new1;
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1]) {
                new1.push_back(nums[i]);
            }
        }
        return new1;
    }
};