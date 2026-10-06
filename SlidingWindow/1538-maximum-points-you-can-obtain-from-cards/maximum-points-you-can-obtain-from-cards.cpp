class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int leftSum = 0;
        int maxi = 0;
        for(int i=0;i<k;i++){
            leftSum+=cardPoints[i];
        }

        maxi = max(maxi,leftSum);


        int rightSum = 0;

        for(int i=0;i<k;i++){
            rightSum+=cardPoints[n-i-1];
            leftSum-=cardPoints[k-i-1];

            maxi = max(maxi, leftSum + rightSum);
        }

        return maxi;

    }
};