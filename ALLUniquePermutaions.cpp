class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        vector<vector<int>> result;
        sort(arr.begin(), arr.end());
        do {
            result.push_back(arr);
        } while (next_permutation(arr.begin(), arr.end()));
        return result;
    }
};