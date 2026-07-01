#include <iostream>
using namespace std;
void printar(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int arr[]={1,3,2,4};
int n=4;
int s=0;
int e=n-1;
while(s<=e){
    swap(arr[s],arr[e]);
    s++;
    e--;
}
printar( arr , n);

}