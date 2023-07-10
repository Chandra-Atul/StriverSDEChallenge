#include <bits/stdc++.h>
using namespace std;


vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long> > ans;
  vector<long long>prev;
  prev.push_back(1);
  ans.push_back(prev);

  for(int k=2;k<=n;k++){
    vector<long long>temp;
    temp.push_back(prev[0]);

    for(int i=1;i<prev.size();i++){
      long long val = prev[i-1] + prev[i];
      temp.push_back(val);
    }

    temp.push_back(prev[prev.size()-1]);


    ans.push_back(temp);

    prev = temp;

  }



  return ans;
}
