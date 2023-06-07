#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n=matrix.size();
	int m=matrix[0].size();
	vector<int>rowvis(n, 0);
	vector<int>colvis(m, 0);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				rowvis[i]=1;
				colvis[j]=1;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(rowvis[i] || colvis[j])
			matrix[i][j]=0;
		}
	}
	
}