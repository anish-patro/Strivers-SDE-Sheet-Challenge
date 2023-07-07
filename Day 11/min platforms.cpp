int calculateMinPatforms(int arr[], int dep[], int n) {
    // Write your code here.
        sort(arr, arr+n);
        sort(dep, dep+n);
        int c=1;
        int ans=1;
        int i=1;
        int j=0;
        while(i<n && j<n){
            if(arr[i]<=dep[j])
              {
                  i++;
                  c++;
              }
              else if(arr[i]>dep[j]){
                  c--;
                  j++;
              }
              ans=max(ans, c);
        }
        return ans;
}