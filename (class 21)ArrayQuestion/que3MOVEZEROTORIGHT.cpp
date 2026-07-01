#include<iostream>
using namespace std;
void printar(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
int arr[]={0,1,0,3,12,0};
// n=arr.size()
int n =6;
int i=0;
for(int j=0; j<n; j++){
    if(arr[j]!=0){
        swap(arr[j],arr[i]);
        i++;
    }
}
printar(arr,6);


}