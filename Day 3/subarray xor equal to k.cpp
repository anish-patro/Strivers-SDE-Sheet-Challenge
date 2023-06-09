#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int c=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        int xoro=0;
        for(int j=i;j<n;j++)
       { 
        xoro=xoro^arr[j];
        if(xoro==x) c++;
        }
    }
    return c;
}