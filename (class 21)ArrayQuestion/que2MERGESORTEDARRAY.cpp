#include<iostream>
using namespace std;
void printar(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int arr1[]={1,2,5,7,9};
int arr2[]={2,4,6};

//n=arr1.size() , m= arr2.size()
int n=5;
int m=3;
int i=0;
int j=0;
int k=0;
int arr3[8];

while(i<n && j<m){
if(arr1[i]<arr2[j]){
arr3[k]=arr1[i];
k++;
i++;
}
else{
    arr3[k]=arr2[j];
    j++;
    k++;
}
}
while(i<n){
    arr3[k]=arr1[i];
    k++;
    i++;
}
while(j<m){
    arr3[k]=arr2[j];
    k++;
    j++;
}
printar(arr3,8);


}