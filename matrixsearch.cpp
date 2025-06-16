#include<iostream>
using namespace std;
int search_in_row(int** A,int n11,int n12,int B,int h){
     int head=0;
     int tail=n12-1;
     int ans=-1;
     while(head<=tail){
         int mid=(head+tail)/2;
         if(A[h][mid]==B){
             ans=mid;
             break;
         }
         else if(A[h][mid]<B){
             head=mid+1;
         }
         else{
             tail=mid-1;
         }
     }
     if(ans==-1){
         return 0;
     }
     else return 1;
 }
 int search_which_row(int** A,int n11,int n12,int B,int h){
     if(h<n11){
         if(A[h][0]<=B && A[h][n12-1]>=B){
             int e=search_in_row(A,n11,n12,B,h);
             return e;
         }
         else{
             return search_which_row(A,n11,n12,B,h+1);
         }
     }
     else return 0;
 }
int searchMatrix(int** A, int n11, int n12, int B) {
    int d=search_which_row(A,n11,n12,B,0);
    return d;
}
int main(){
    int n11,n12;
    cin>>n11>>n12;
    int B;
    cin>>B;
    int** A = new int*[n11];
    for (int i = 0; i < n11; i++) {
        A[i] = new int[n12];
        for (int j = 0; j < n12; j++) {
            cin >> A[i][j];
        }
    }
    int q=searchMatrix(A,n11,n12,B);
    cout<<q;
}
