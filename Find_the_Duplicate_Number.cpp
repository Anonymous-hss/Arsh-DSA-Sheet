class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int duplicate = 0;
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size() ; i++) {
            if(nums[i] == nums[i-1]) {
                duplicate = nums[i-1];
            }
        }
        return duplicate;
    }
};