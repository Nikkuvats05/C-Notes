#include <iostream>
using namespace std;

void ssort(int* arr, int s,int e){
    cout<<"In recursion ";
    for(int i=0; i<e; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(e==0)
    return;
    if(s==e){
        return;
    }
        for(int i=0; i<e-1; i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }          
        }
    return ssort(arr,s+1, e);
}
 
int main(){
    int arr[9]={1,4,3,2,4,1,5,4,3};
    int s=0;
    int e=8;
    ssort(arr,s,9);
    cout<<endl;
    for(int i=0; i<9; i++ ){
        cout<<arr[i]<<" ";
    }
}