#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1])  return nums[i];
        }
        return -1;
    }
};



/// 2nd solution

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int>mp;
        for(auto it: nums)  mp[it]++;

        for(auto it: mp){
            if(it.second >= 2){
                return it.first;
            }
        }

        return -1;
    }
};