#include <iostream>
using namespace std ;

//Que 1 Swap Alternate i/p - (1,2,3,4,5l ; o/p {2,1,4,3,5}
/*
void printar(int arr[], int n) {
for(int i=0; i<n; i++) {
cout<<arr[i]<<" " ;
}
cout<<endl;
} 

void swapar( int arr[], int n) {
for( int i=0; i<n; i=i+2){
if(i+1<n){
swap(arr[i], arr[i+1]) ;
}
}
} 
int main() {
int ar[5]={1,2,3,4,5};
int ab[6]={1,2,3,4,5,6};
swapar( ar, 5);
swapar(ab, 6);
printar(ar, 5);
printar( ab, 6);
}


//Swap without pre defined fxn 
int main() {
int arr[3]= {2,5,1};
int n=3;
int temp = arr[1];
arr[1]=arr[0];
arr[0]=temp;
for(int i=0;i<n;i++){
cout<<arr[i]<<" "; 
}
}

//Just taking input of array

int main() {
int arr[100];
int size;
cout<<"Size of array is";
cin>>size;
cout<<endl;
cout<<"Enter the element of array";
for(int i=0;i<size; i++) {
cin>>arr[i];
} 
cout<<"Elements of array are :" ;
for( int i=0; i<size; i++) {

cout<<arr[i]<<" ";
}
}

//Que 2 ; n size array ; n=2m+1, 'm' number appears 2 times in array bit only one no appear once in array, find that one no
//i/p - arr[7]={3,7,2,2,7,3,4} so ans is 4;
int main() {
int arr[7]={3,7,2,2,7,3,4} ;
int ans =0;
for (int i=0; i<7 ;i++) {
ans = ans^arr[i];
}
cout<<ans;
}

//Que If accurance of two numbers is same then return false else true
//i/p - {2,1,1,2,3,4,), 2appear 2 time & 1 appear 2 time so false, {1,2,2,4,4,4,) not any number appears same times so true

bool checkoccr( int arr[], int n) {
sort(arr, arr+n) ;
int freq[100];
int fsize=0;
int i=0;
while(i<n){
int count =0;
while(i+1<n && arr[i]==arr[i+1]){
count++;
i++;
}
freq[fsize]=count;
fsize++;
i++;
}
sort(freq, freq+fsize) ;
for(int j=0; j<fsize-1 ; j++) {
if ( freq[j]==freq[j+1]){
return false;
}
}
return true;
}
int main() {
int arr[10]={-3,0,1,-3,1,1,1,-3,10,0};
//int arr[6]={2,1,1,2,3,4} ;
if(checkoccr(arr,6)) {
cout<<"true" ;
} 
else{
cout<<"false" ;
} 
}

// Que n size array, element range (1,n),all elements appear either once or twice, find twice appear elements
// i/p - {1,2,2,5,3,5}, o/p - (2,5)

int main() {
int arr[6]={1,2,2,5,3,5} ;
int size =6;
sort(arr, arr+size) ;
for(int i=0; i<size-1 ; i++) {
if(arr[i]==arr[i+1]){
cout<<arr[i]<<" ";
} 
} 
} 

//Que 4, Intersection of array or find common element in arrays

int main() {
int arr1[5]={1,2,3};
int n=3;
int arr2[4]={3,7,4,};
int m=3;
for(int i=0; i<n ;i++) {
for(int j=0; j<m; j++) {
if(arr1[i]==arr2[j]) {
cout<<arr1[i]<<" ";
} 
} 
}
} 

//Pair sum i/p - {1,2,3,4,5} & sum=5, find pair of elements whose sum=5 ;o/p - (1,4),(2,3)

int main() {
int arr[5]={1,2,3,4,5};
int n=5;
int sum=5;
for(int i=0 ; i<n; i++) {
for(int j=i+1; j<n ; j++) {
if(arr[i]+arr[j]==sum){
cout<<arr[i]<<" "<<arr[j]<<endl;
}
}
}
}

//Triplet sum arr{1,2,3,4,5}, sum =12

int main() {
int arr[5]={1,2,3,4,5,};
int n=5;
int sum=12;
for(int i=0; i<n ;i++) {
for(int j=i+1; j<n; j++) {
for(int k=j+1; k<n; k++) {
if(arr[i]+arr[j]+arr[k]==sum) {
cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
}
}
}
}
}

//Sort arr in assending order
void printar(int arr[], int n) {
for(int i=0; i<n; i++) {
cout<<arr[i]<<" ";
}
} 

int main() {
int ar[6]={1,0,0,1,1,0};
int i=0;
int j=5;
if(ar[i]==0 && ar[j]==1){
i++;
j--;
} 
else if(ar[i]==1 && ar[j]==0) {
swap(ar[i], ar[j]) ;
}

printar(ar, 6);
} 
*/
// Que sort ar={0,2,2,1,0,1,1,0,2}

void printar(int arr[], int n) {
for(int i=0; i<n; i++) {
cout<<arr[i]<<" ";
}
} 
void sortar(int arr[], int n) {
int i=0;
for(int j=0; j<n; j++) {
for(int i=0; (i<(n-1)); i++) {

if(arr[i]>arr[i+1]) {
swap(arr[i], arr[i+1]);

}
}
}
}
int main() {
int arr[9]={0,2,2,1,0,1,1,0,2};
int n=9;
sortar(arr, 9);
printar(arr,9);
}
