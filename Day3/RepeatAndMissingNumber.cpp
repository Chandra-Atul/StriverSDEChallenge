#include <bits/stdc++.h>
using namespace std;


// 1st method:

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	vector<int>vis(n+1, 0);

	for(int i=0;i<n;i++){
		vis[arr[i]]++;
	}

	int missing = -1, rep = -1;

	for(int i=1;i<=n;i++){
		if(vis[i] == 0){
			missing = i;
		}else if(vis[i]>1){
			rep = i;
		}
	}

	return {missing, rep};
	
}


// T.C: O(n)
// S.c: O(n)


// second approach


#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{

	long long Nsum = 0;
	long long Nsum2 = 0;

	for(int i=0;i<n;i++){
		Nsum+=arr[i];
		Nsum2 += (long long)arr[i] * (long long)arr[i];
	}


	// first equation:
	long long sum1 = n*(n+1)/2;
	long long sum2 = (n*(n+1)*(2*n+1))/6;

	
	long long diff1 = Nsum - sum1;

	
	
	
	long long diff2 = Nsum2 - sum2;

	long long sumOfBoth = diff2/diff1;
	long long diffOfBoth = diff1;

	
	long long rep = (sumOfBoth + diffOfBoth)/2;
	
	long long missing = sumOfBoth - rep;

	return {missing, rep};
}



