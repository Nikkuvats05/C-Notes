#include <iostream>
using namespace std;

int getsum(int *arr, int size){
    //samjane ke liye
    cout<<"size is = "<<size<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //
    if(size==0)
    return 0;
    if(size==1)
    return arr[0];
    int remaningpart= getsum(arr+1, size-1);
    int sum=arr[0]+remaningpart;
    return sum;
}
int main(){
int arr[6]={2,4,6,9,11,17};
    int size=6;
   int ans= getsum(arr,size);
   cout<<"Sum is = "<<ans;
}