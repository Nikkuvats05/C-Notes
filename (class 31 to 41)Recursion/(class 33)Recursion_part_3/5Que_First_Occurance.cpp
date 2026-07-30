#include <iostream>
using namespace std;

int search(int arr[], int s, int e, int k, int ans){
    
    cout<<"ans is = "<<ans<<endl;
    if(s>e)
    return ans ;
    
    int mid = s+(e-s)/2;
    if(arr[mid]==k){
        ans=mid;
        return search(arr, s, mid-1, k, ans);
    }
    if(arr[mid]<k){
        return search(arr, mid+1, e, k, ans);
    }
    if(arr[mid]>k){
         return search(arr, s, mid-1, k, ans);
    }
    return ans;
}
int main(){
    int arr[]={0,0,1,1,1,1,2,2,2};
    int s=0;
    int e=8;
    int k=1;
    int a=-1;
    int ans= search(arr, s, e, k, a);
    cout<<"Ans is  = "<<ans<<endl;
}