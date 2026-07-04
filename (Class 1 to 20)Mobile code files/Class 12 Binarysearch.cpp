#include <iostream>
using namespace std;

//Binary search
/*
int binarysearch(int arr[], int size, int key) {
int start=0;
int end = (size-1);
int mid =(start+end)/2;
// mid= (s+(e-s)/2)
while(start<=end){
if(arr[mid]==key) {
return mid;
}
if(key>arr[mid]) {
start=mid+1;
}
else{
end=mid-1;
}
mid=(start+end)/2;
} 
return -1;
} 

int main() {
int even[6]={1,3,5,7,9,11};
int key=5;
int index= binarysearch(even, 6, 5);
cout<<"index of 5 is:" <<index<<endl;
}

// eg 2

int main() {
int arr[6]={ 3,7,11,13,19,27};
int size=6;
int key=19;
int start=0;
int end=(size-1);
int mid = (start+end) /2;
while(start<=end){
if(arr[mid]==key) {
cout<<"index of key is : "<<mid;
}
if(arr[mid]<key) {
start=mid+1;
}
else {
end= mid-1;
}
mid = (start+end)/2;
}
return -1;
}
*/
// ex 3

int binarysearch(int arr[], int size, int key) {
int s=0;
int e= (size-1);
int mid = (s+ (e-s)/2) ;
while(s<=e){
if(arr[mid]==key) {
return mid; 
} 
if(key>arr[mid]) {
s=mid+1;
}
else {
e = mid-1;
}
mid = (s+(e-s) /2);
}
return -1;
}
int main () {
int arr[5]={4,8,16,22,34};
int index= binarysearch(arr, 5,4);
cout<<"Index of given key is :" <<index<<endl;
} 