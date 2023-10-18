#include<bits/stdc++.h>
using namespace std;

// first way : 

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        for(int i=m, ind = 0;i<m+n && ind<n;i++, ind++){
            nums1[i] = nums2[ind];
        }

        sort(nums1.begin(), nums1.end());
    }
};

// second way:



class Solution {
public:
    void print(vector<int>nums1){
        for(auto it: nums1){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left = m-1;
        int right = 0;
        
        while(left>=0 && right< n){
            if(nums1[left] >= nums2[right]){
                swap(nums1[left], nums2[right]);
                left--;
                right++;
            }else{
                break;
            }
        }


        print(nums1);
        print(nums2);

        sort(nums1.begin(), nums1.begin()+m);
        sort(nums2.begin(), nums2.end());

        for(int i=m, ind = 0;i<n+m && ind < n;i++, ind++){
            nums1[i] = nums2[ind];
        }


        

    }
};