class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        // int n = nums.size();
        // unordered_map<int, int>mp;

        // for(auto it: nums)  mp[it]++;

        // for(auto it: mp){
        //     if(it.second == 1)  return it.first;
        // }

        // return -1;

        // Time Complexity = O(n)
        // space complexity = O(n)

        // int n = nums.size();

        // if(n == 1)  return nums[0];

        // int cnt = 1;
        // for(int i=1;i<n;i++){
        //     if(nums[i] == nums[i-1]){
        //         cnt++;
        //         if(cnt == 2)    cnt = 0;
        //     }else{
        //         if(cnt == 0)    cnt++;
        //         else    return nums[i-1];
        //     }
        // }

        // return nums[n-1];

        // Time Complexity = O(n)
        // Space Complexity = O(1)

        int n = nums.size();

        if (n == 1)
            return nums[0];

        if (nums[0] != nums[1])
            return nums[0];

        if (nums[n - 1] != nums[n - 2])
            return nums[n - 1];

        int l = 1, r = n - 2;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
                return nums[mid];

            if (mid % 2 == 0)
            {
                if (nums[mid] == nums[mid + 1])
                    l = mid + 1;
                else
                    r = mid - 1;
            }
            else
            {
                if (nums[mid] == nums[mid - 1])
                    l = mid + 1;
                else
                    r = mid - 1;
            }
        }

        return -1;

        // Time complexity = O(log n)
        // Space Complexity = O(1)
    }
}; 

// problem link: https://leetcode.com/problems/single-element-in-a-sorted-array/description/