class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int totalPoints = accumulate(cardPoints.begin(), cardPoints.end(), 0);
        if (k == n) return totalPoints;
        int minSum = 0;
        for (int i = 0; i < n - k; ++i) {
            minSum += cardPoints[i];
        }

        int currentSum = minSum;
        for (int i = n - k; i < n; ++i) {
            currentSum += cardPoints[i] - cardPoints[i - (n - k)];
            minSum = min(minSum, currentSum);
        }
        return totalPoints - minSum;
    }
};