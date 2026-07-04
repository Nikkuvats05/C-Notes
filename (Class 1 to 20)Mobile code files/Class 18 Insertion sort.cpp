#include <iostream>
using namespace std ;

void printa(int arr[], int n) {
for(int i=0; i<n; i++) {
cout<<arr[i]<<" " ;
}
} 
/*
int main() {
int arr[]={ 5,2,6,9,4};
int n=5;
for(int i=1; i<n; i++) {
int temp=arr[i];
int j;
for(j=i-1; j>=0; j--) {
if(arr[j]>temp) {
arr[j+1]=arr[j];
}
else {
break;
}
}
arr[j+1]=temp;
}
printa(arr, 5);
}
*/
//By using while loop

int main() {
int arr[]={ 5,2,6,9,4};
int n=5;
for(int i=1; i<n; i++) {
int temp=arr[i];
int j=i-1;
while(j>=0){
if(arr[j]>temp) {
arr[j+1]=arr[j];
}
else {
break;
}
j=j-1;
}
arr[j+1]=temp;
}
printa(arr, 5);
}

    