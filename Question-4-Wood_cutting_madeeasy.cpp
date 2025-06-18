int Solution::solve(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int head=0;
    int tail=A[A.size()-1];
    int ans=0;
    while(head<=tail){
        int mid=head+(tail-head)/2;
        long w=0;
        for(int i=0;i<A.size();i++){
            if(A[i]>mid){
                w+=(A[i]-mid);
        }
        }
        if(w>=B) {
            ans=mid;       
            head=mid+1;     
        }else{
            tail=mid-1;    
        }
    }

    return ans;
    }
