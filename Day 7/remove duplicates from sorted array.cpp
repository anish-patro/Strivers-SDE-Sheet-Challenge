int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int ind=1;
	for(int i=1;i<n;i++){
		if(arr[i]!=arr[i-1])
		ind++;
	}
	return ind;
}