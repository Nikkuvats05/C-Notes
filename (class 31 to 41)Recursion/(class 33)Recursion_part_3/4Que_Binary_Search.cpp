#include <iostream>
using namespace std;

bool search(int *arr, int s,int e, int key){
    //samjane ke liye
    cout<<"size is = "<<e-s+1<<endl;
    for(int i=s; i<=e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(s>e)
    return false;
    int mid= s+(e-s)/2;
    cout<<"Mid is = "<<arr[mid]<<endl;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key){
        return search(arr, mid+1, e, key);
    }
    else{
        return search(arr, s, mid-1, key);
    }
}
int main(){
int arr[6]={2,4,6,9,11,17};
    int size=6;
    int key=17;
    int s=0;
    int e=size-1;
   bool ans= search(arr,s,e,key);
   if(ans){
    cout<<"Mil gya";
   }
   else{
    cout<<"Nhi mila";
   }

   
}