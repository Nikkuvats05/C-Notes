#include <iostream>
using namespace std ;
void printa(int arr[], int n) {
for(int i=0; i<n; i++) {
cout<<arr[i]<<" ";
}
}
 
int main() {
int arr[]={2,5,14,7,1,11};
int n=6;
for(int i=1; i<n; i++) {
for(int j=0; j<n-i; j++) {
if(arr[j]>arr[j+1]){
swap(arr[j], arr[j+1]);
}
}
}
printa(arr, 6);
}
