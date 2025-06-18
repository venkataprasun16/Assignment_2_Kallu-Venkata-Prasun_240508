int Solution::findMin(const vector<int> &A) {
    int head=0;
    int tail=A.size()-1;
    while(head<tail){
        int mid=(head+tail)/2;
        if(A[mid]>A[tail]){
            head=mid+1;
        }
            else tail=mid;
    }
    return A[head];
}
