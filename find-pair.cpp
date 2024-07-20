class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        unordered_set<int> seen;
        
        for (int num : arr) {
            if (seen.count(num + x) || seen.count(num - x)) {
                return 1; 
            }

            seen.insert(num);
        }
        
        return -1;
    }
};
