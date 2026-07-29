#include <iostream>
using namespace std;

bool search(int *arr, int size, int key){
    //samjane ke liye
    cout<<"size is = "<<size<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(size==0)
        return false;
    
    if(arr[0]==key){
        return true;
    }
    else{
        return search(arr+1, size-1, key);
    }
}
int main(){
int arr[6]={2,4,6,9,11,17};
    int size=6;
    int key=17;
   bool ans= search(arr,size,key);
   if(ans){
    cout<<"Mil gya";
   }
   else{
    cout<<"Nhi mila";
   }

   
}