#include<bits/stdc++.h>
using namespace std;

void sortNumber(vector<int>& nums) {
        int zero = 0, one = 0, two = 0;

        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                zero++;
            }else if(nums[i] == 1){
                one++;
            }else{
                two++;
            }
        }

        int i = 0;

        while(zero--){
            nums[i] = 0;
            i++;
        }
        while(one--){
            nums[i] = 1;
            i++;
        }
        while(two--){
            nums[i] = 2;
            i++;
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