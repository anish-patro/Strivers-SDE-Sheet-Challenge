#include <bits/stdc++.h>
using namespace std;
vector<int> nextPermutation(vector<int> &nums, int n)
{
    //  Write your code here.
    int i, l;
    for( i=n-2;i>=0;i--)
    if(nums[i]<nums[i+1]) break;
    if(i<0) { reverse(nums.begin(), nums.end());
    return nums;}
    for( l=n-1;l>i;l--)
    if(nums[l]>nums[i]) break;
    swap(nums[l], nums[i]);
    reverse(nums.begin()+i+1, nums.end());
    return nums;
}