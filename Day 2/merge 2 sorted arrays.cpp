#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	int j=0;
	for(int i=0;i<m+n;i++){
      if(arr1[i]==0 && j<n){
		arr1[i]=arr2[j];
		j++;
	}
	}


	sort(arr1.begin(), arr1.end());
	return arr1;
}