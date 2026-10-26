class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int>ans(n, 0);
        int moveToLeft = 0, moveToRight = 0;
        int leftBalls = 0, rightBalls = 0;

        for(int i=0;i<n;i++){
            ans[i] += moveToLeft;
            leftBalls += boxes[i] - '0';
            moveToLeft += leftBalls;

            int j = n-i-1;
            ans[j] += moveToRight;
            rightBalls += boxes[j] - '0';
            moveToRight+=rightBalls;

        }

        return ans;
    }
};