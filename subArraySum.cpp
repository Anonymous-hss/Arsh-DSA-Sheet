class Solution {
public:
    int subarraySum(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> sumCount; 
        sumCount[0] = 1; 
        
        int sum = 0; 
        int count = 0; 
        
        for (int num : nums) {
            sum += num; 
            if (sumCount.find(sum - k) != sumCount.end()) {
                count += sumCount[sum - k]; 
            }
            
            sumCount[sum]++;
        }
        return count;
    }
};