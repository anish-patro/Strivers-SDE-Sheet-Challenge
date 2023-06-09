#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > a) {
int  maxi = 0;
	for(int i = 0; i < a.size(); ++i){
		int sum = 0;
		for(int j = i; j < a.size(); ++j){
		       	sum += a[j];
				if(sum == 0)	maxi = max(maxi, j-i+1);
		}
	}
	   return maxi;
  // Write your code here

}