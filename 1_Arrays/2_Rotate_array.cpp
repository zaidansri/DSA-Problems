vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    vector<int>ans(k);
    int n = arr.size();
    for (int i = 0; i< k; i++){
        ans[i]=arr[i];
    }
    for (int i = k; i< n; i++){
        arr[i-k]=arr[i];
    }
    for (int i = 0; i<k; i++){
        arr[n-k+i]=ans[i];
    }
    return arr;
}