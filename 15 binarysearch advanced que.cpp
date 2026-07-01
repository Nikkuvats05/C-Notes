
#include <iostream>
using namespace std ;
/*
//Book allocation problem 
// Givrn= arr, n, m
bool ispossible( int arr[], int n, int m, int mid) {
int studentcount=1;
int pagesum=0;
for(int i=0; i<n; i++) {
if(pagesum+arr[i]<=mid) {
pagesum=pagesum+arr[i];
} 
else {
studentcount++;
if(studentcount>m || arr[i]>mid) {
return false;
} 
 
pagesum=arr[i];
} 
} 
return true;
} 


int allocatebook(int arr[], int n, int m) {
int s=0;
int sum=0;
for(int i=0; i<n; i++) {
sum= sum+arr[i];
} 
int e=sum;
int mid = ((s+e)/2);
int ans= -1;
while(s<=e) {
if(ispossible(arr, n, m, mid)) {
ans=mid;
e=mid-1;
}
else {
s=mid+1;
}
mid = ((s+e)/2); 
} 
return ans;
} 


int main () {
int page[4]={10,20,30,40};
int n=4;
int m=2;
int ans= allocatebook(page,4,2);
cout<<ans<<endl;
}


// Painter partitions problem
//Given= arr, n, m

bool ispossible(int arr[], int n, int m, int mid) {
int painterC=1;
int boardC=0;
for(int i=0; i<n; i++) {
if(boardC+arr[i]<=mid) {
boardC = boardC+arr[i];
} 
else {
painterC++;
if(painterC>m || arr[i]>mid) {
return false;
} 
boardC= arr[i];
}
} 
return true;
} 

int boardallot(int arr[], int n, int m) {
int s=0;
int sum=0;
for(int i=0; i<n; i++) {
sum=sum+arr[i];
} 
int e=sum;
int mid = ((s+e)/2);
int ans = -1;
while(s<=e) {
if(ispossible(arr, n, m, mid) ) {
ans=mid;
e=mid-1;
}
else {
s=mid+1;
}
mid = ((s+e)/2);
} 
return ans;
} 

int main() {
int board[4]={5,5,5,5};
int n=4;
int m=2;
int ans = boardallot(board, n, m) ;
cout<<ans<<endl;
}
*/
// Aggressive cow problem

bool ispossible(int arr[], int n, int c, int mid) {
int cowC=1;
int firstposition= arr[0];
for(int i=0; i<n; i++) {
if(arr[i]-firstposition>=mid) {
cowC++;
if(cowC==c) {
return true;
} 
firstposition= arr[i];
} 
} 
return false;
} 

int cow(int arr[], int n, int c) {
sort(arr, arr+n) ;
int s=0;
int maxi=0;
for(int i=0; i<n; i++) {
maxi= max(maxi, arr[i]) ;
} 
int e=maxi;
int mid = ((s+e)/2);
int ans= -1;
while(s<=e){
if(ispossible( arr, n, c, mid)) {
ans=mid;
s=mid+1;
}
else {
e=mid-1;
}
mid = ((s+e)/2);
}
return ans;
} 

int main() {
int stall[5]={4,2,1,3,6};
int n=5;
int c=2;
int ans=cow(stall, 5,2);
cout<<ans<<endl;
}