int Solution::searchInsert(vector<int> &A, int B) {
    int left=0,right=A.size()-1;
    while(left<=right){
    int mid=(right+left)/2;
    if(A[mid]==B){
        return mid;
    }
    else if(A[mid]>B){
    right=mid-1;
    }
    else if(A[mid]<B){
        left=mid+1;
    }
    }
    return left;
    
}
