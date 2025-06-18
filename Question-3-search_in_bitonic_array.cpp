int binary_search_asc(vector<int> &arr, int low, int high, int k) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == k) return mid;
        else if (arr[mid] < k) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
int binary_search_dsc(vector<int> &arr, int low, int high, int k) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == k) return mid;
        else if (arr[mid] > k) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
int findPeak(vector<int> &A) {
    int low = 0, high = A.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;

        if ((mid == 0 || A[mid - 1] < A[mid]) && (mid == A.size() - 1 || A[mid] > A[mid + 1]))
            return mid;
        else if (mid > 0 && A[mid - 1] > A[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int Solution::solve(vector<int> &arr, int k) {
    int len=arr.size();
    int bt = findPeak(arr);
    if(arr[bt]==k){
        return bt;
    }
    int asc=binary_search_asc(arr,0,bt-1,k);
    if(asc!=-1){
        return asc;
    }
    int dsc=binary_search_dsc(arr,bt+1,len-1,k);
    return dsc;
}