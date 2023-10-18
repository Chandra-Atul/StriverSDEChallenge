class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());

        vector<vector<int>>ans;
        
        ans.push_back(intervals[0]);

        int mini = intervals[0][0];
        int maxi = intervals[0][1];

        for(int i=1;i<n;i++){
            if(intervals[i][0] <= maxi){
                maxi = max(maxi, intervals[i][1]);
                ans[ans.size()-1][1] = maxi;


            }else{
                ans.push_back(intervals[i]);
                maxi = intervals[i][1];
            }
        }


        return ans;

    }
};