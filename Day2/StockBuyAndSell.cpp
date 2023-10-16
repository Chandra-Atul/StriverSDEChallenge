#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
        
        int minPrice = INT_MAX, profit =0;
        for(int i=0;i<prices.size();i++){
            if(prices[i] < minPrice){
                minPrice = prices[i];
            }else if(prices[i] - minPrice > profit){
                profit = prices[i] - minPrice;
            }
        }

        return profit;
    }
int main(){

    int n;
    cin >> n;
    vector<int>v(n, 0);
    for(int i=0;i<n;i++)    cin >> v[i];

    int ans = maxProfit(v);
    cout<<ans<<endl;

    return 0;
}