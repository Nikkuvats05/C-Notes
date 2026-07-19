#include <iostream>
using namespace std;

void print(int arr[], int n, int start=0){
    for(int i=start; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size=7;
    print(arr,7);
    cout<<endl<<endl;
    print(arr,7,3);
}
