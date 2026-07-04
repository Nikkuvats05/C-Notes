#include <iostream>
using namespace std;
void printa(int arr[], int n) {
for(int i=0; i<n; i++) {
cout<<arr[i]<<" "; 
}
}
int main() {
int arr[5]={64,25, 12, 22, 21};
int n=5;
for(int i=0; i<(n-1); i++) {
int minindex=i;
for( int j=i+1; j<n; j++) {
if(arr[j]<arr[minindex]) {
minindex=j;
}
 
swap(arr[minindex], arr[i]) ;
} 
}
 printa(arr, 5);
 }
 