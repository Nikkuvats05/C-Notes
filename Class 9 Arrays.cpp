/*

#include<iostream>
using namespace std;

int main(){


    int num[3]={5,7,11};
    cout<<"Value of 2nd index is: " <<num[2]<<endl;
    
    int tw[10]={1,7,5,8,4,8,9,4,7,6};
    cout<<"Value of 7th index is :" <<tw[7]<<endl;
    
    //Printing the array
    
    int n=3;
    for(int i=0; i<n; i++) {
    cout<<num[i]<<" ";
    }
    cout<<endl;
    int on[15]= {2,7};
    int a=15;
    for(int i=0; i<a; i++) {
    cout<<on[i]<<" ";
    } 
    cout<<endl;
}

*/
// Arrays in function

#include <iostream>
using namespace std;
/*
void printarray(int ar[], int n) {
cout<<"Printing the array"<<endl;
for(int i=1; i<n; i++) {
cout<<ar[i]<<" ";
}
cout<<"Printing done" <<endl;
cout<<endl;
}

int main() {
int tw[10]={1,7,5,8,4,8,9,4,7,6};
printarray(tw, 10);


    int num[3]={5,7,11};
    printarray(num, 3);
    
//Finding the size of array
    int size= (sizeof(tw)/sizeof(int)) ;// divide by int isliye kiya kyuki ye size in bytes deta h to uako replace krne ke liye int se divide kiya i.e 4 
    cout<<"Size of tw array is :" <<size<<endl;
    } 
    
 
//Maximum and minimum in array
    int getmax(int ar[], int n) {
    int max = INT_MIN;
    
    for(int i=0; i<n; i++) {
    //max = max(max, ar[i];
    if(ar[i]>max) {
    max = ar[i];
    } 
    } 
    return max;
    } 
    int getmin(int ar[],int n) {
    int min = INT_MAX;
    
    for(int i=0; i<n; i++) {
    // min = min(min, ar[i];
    if(ar[i]<min) {
    min = ar[i];
    } 
    } 
    return min;
    } 
    
    int main() {
    int size;
    cout<<"size of array is :" ;
    cin>>size;
    cout<<" Value of elements in array is :" ;
    int ar[100];
    for(int i=0; i<size ;i++) {
    cin>>ar[i];
    } 
    cout<<"Maximum value of array is :" <<getmax(ar, size)<<endl;
    cout<<"Minimum value of array is :" <<getmin(ar, size)<<endl;
    } 
    
//Find sum of all element of array

int findsum(int arr[], int n) {
int sum=0;
for(int i=0; i<n; i++) {
sum=sum+arr[i];
}
return sum;
}
int main() {
// AGAR ELEMENTS KI VALUE INPUT KARANI HO TO
   int size;
    cout<<"size of array is :" ;
    cin>>size;
    cout<<" Value of elements in array is :" ;
    int arr[100];
    for(int i=0; i<size ;i++) {
    cin>>arr[i];
    } 
//int arr[5]={2,4,1,3,5};
int ans = findsum(arr, size);
cout<<"Sum of all element of array is :" <<ans<<endl;
}

//Linear Search

bool search(int arr[], int n, int key) {
for(int i=0; i<n; i++) {
if(key==arr[i]) {
return 1;
}
} 

return 0;


} 

int main() {
int arr[5]={1,3,5,4,11} ;
int key;
cout<<"Value of key is :" ;
cin>>key;
bool found = search(arr, 5, key);
if(found){
cout<<"Key is present" ;
} 
else{
cout<<"Key is absent" ;
} 

}
*/
//Reverse an array
void reverse(int arr[], int n) {
int start=0;
int end = (n-1);
while(start<=end){
swap(arr[start], arr[end]) ;
start++;
end--;
} 
} 
void printarray(int arr[], int n) {
for(int i=0 ;i<n ;i++) {
cout<<arr[i]<<" ";
} 
} 


int main() {
int a[5]={1,2,3,4,5};
int b[6]={1,2,3,4,5,6};
reverse(a, 5);
reverse(b, 6);

printarray(a,5);
cout<<endl;
printarray(b,6);
}


