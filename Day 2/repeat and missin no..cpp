#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &A, int n)
{
	// Write your code here 
 int sum=0;
 int a, b;
    // int n=A.size();
    vector<int>v(n+1,0);
    pair<int, int>ans;
    for(int i=0;i<A.size();++i)
    v[A[i]]++;
    for(int i=1;i<n+1;++i)
    {if(v[i]>1)
    a=i;
    if(v[i]==0)
    b=i;}
    return ans={b, a};
    
}
