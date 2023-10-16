#include<bits/stdc++.h>
using namespace std;

 void sortColors(vector<int>& nums) {
        int ind = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                swap(nums[i], nums[ind]);
                ind++;
            }
        }

        for(int i=ind;i<nums.size();i++){
            if(nums[i] == 1){
                swap(nums[i], nums[ind]);
                ind++;
            }
        }
    }

int main(){
    int n;
    cin >> n;
    vector<int>v(n, 0);

    for(int i=0;i<n;i++){
        cin >> v[i];
    }


    for(auto it: v){
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;
}