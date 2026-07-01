#include <iostream>
using namespace std ;

//Position of first and last occurrence of an element in an array
// i/o{0,0,1,1,2,2,2,2} o/p - 4,7
/*
int firsto(int arr[], int size, int key) {
int start=0;
int end= (size-1);
int ans = -1;
int mid= ((start+end)/2);
while(start<=end){
if(arr[mid]==key) {
ans = mid;
end=mid-1;
}
if(arr[mid]>key) {
end=mid-1;
}
if(arr[mid]<key) {
start=mid+1;
}
mid=((start+end)/2);
}
return ans;
}
int lasto(int arr[], int size, int key) {
int start=0;
int end= (size-1);
int ans = -1;
int mid= ((start+end)/2);
while(start<=end){
if(arr[mid]==key) {
ans = mid;
start= mid+1;
}
if(arr[mid]>key) {
end=mid-1;
}
if(arr[mid]<key) {
start=mid+1;
}
mid=((start+end)/2);
}
return ans;
}

int main() {
int arr[8]={0,0,1,1,2,2,2,2};
int first= firsto(arr, 8,2);
cout<<"First occurance of 2 is at index :" <<first<<endl;
int last= lasto(arr, 8,2);
cout<<"Last occurance of 2 is at index :" <<last<<endl;
}

//Total no of occurance of an element in an array
// i/p{1,2,3,3,3,3,5} o/p 4

int firsto(int arr[], int size, int key) {
int start=0;
int end= (size-1);
int ans = -1;
int mid= ((start+end)/2);
while(start<=end){
if(arr[mid]==key) {
ans = mid;
end=mid-1;
}
if(arr[mid]>key) {
end=mid-1;
}
if(arr[mid]<key) {
start=mid+1;
}
mid=((start+end)/2);
}
return ans;
}
int lasto(int arr[], int size, int key) {
int start=0;
int end= (size-1);
int ans = -1;
int mid= ((start+end)/2);
while(start<=end){
if(arr[mid]==key) {
ans = mid;
start= mid+1;
}
if(arr[mid]>key) {
end=mid-1;
}
if(arr[mid]<key) {
start=mid+1;
}
mid=((start+end)/2);
}
return ans;
}

int main() {
int arr[7]={1,2,3,3,3,3,5};
int first= firsto(arr, 7,3);

int last= lasto(arr, 7,3);

cout<<"Total no of occurance of 3 is :" <<((last-first) +1)<<endl;
}
*/
//Mountain Array
//Find max element in arr i/p{3,4,5,2} o/p 5
int main() {
int arr[4]={3,4,5,2};
int size=4;
int start=0;
int end=size-1;
int mid= ((start+end)/2);
while(start<end){
if(arr[mid]<arr[mid+1]){
start=mid+1;
}
else {
end=mid;
}
mid = ((start+end)/2);
}
cout<<"Peak element in array is at index :" <<start;
}
 