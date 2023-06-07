#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int mid=0;
    int low=0;
    int high=n-1;
    while(low<high && mid<=high){
       if(arr[mid]==0){
          swap(arr[low], arr[mid]);
          low++;
          mid++;
       }
       else if(arr[mid]==2){
          swap(arr[mid], arr[high]);
          high--;
       }
       else
       mid++;
       
    }
}