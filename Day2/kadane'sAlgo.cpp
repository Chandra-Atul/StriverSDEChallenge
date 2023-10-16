// kadane's Algorithm
// : maximum subarray sum

#include<bits/stdc++.h>
using namespace std;

int maxSubArray(int n, vector<int>&nums){
    int maxi = INT_MIN;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            maxi = max(maxi, sum);
            if(sum < 0){
                sum = 0;
            }
        }

    return maxi;
}
int main(){
    int n;
    cin >> n;
    vector<int>v(n, 0);
    for(int i=0;i<n;i++)    cin >> v[i];

    int ans = maxSubArray(n, v);
    cout<<"maximum subarray sum is: "<<ans<<endl;

    // cout<<"hii"<<endl;
    return 0;
}