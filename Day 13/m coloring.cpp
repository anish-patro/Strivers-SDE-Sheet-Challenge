bool isSafe(int col, int node, vector<vector<int>> &graph, int color[], int n){
for(int k=0;k<n;k++){
    if(k!=node && graph[k][node]==1 && color[k]==col)
    return false;
}
return true;
}

bool solve(int node, int color[], vector<vector<int>> &graph, int m, int n){
    if(node==n)
    return true;

    for(int i=1;i<=m;i++){
        if(isSafe(i, node, graph, color, n)){
            color[node]=i;
            if(solve(node+1, color, graph, m, n)) return true;
            color[node]=0;
        }
    }
    return false;
}
string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here
    int n=mat.size();
    int color[n]={0};
    return solve(0, color, mat, m, n)?"YES":"NO";
}