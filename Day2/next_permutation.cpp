#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(), nums.end());
}

int main(){
    int n;
    cin >> n;

    vector<int>v(n, 0);
    for(int i=0;i<n;i++)    cin >> v[i];

    nextPermutation(v);

    for(auto it: v){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}