int Solution::findCount(const vector<int> &A, int B) {
    int left=0;
    int right=A.size()-1;
    while (left <= right) {
        int mid=left+(right - left)/2;
        if (A[mid] == B){
            int count = 1;
        int l= mid - 1,r= mid + 1;
        while (l>=0 && A[l]==B) {
            count++;
            l--;
        }
        while (r<A.size() && A[r]==B) {
            count++;
            r++;
        }
        return count;
        } else if (A[mid] < B) {
            left = mid+1;
        } else {
            right = mid-1;
        }
    }
    return 0;
        
    }