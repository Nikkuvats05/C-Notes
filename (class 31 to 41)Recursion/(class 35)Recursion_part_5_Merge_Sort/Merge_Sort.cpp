#include <iostream>
using namespace std;

void merge(int* arr, int s, int e){
     cout<<"Merge fxn = ";
    for(int i=0; i<=e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int mid= s+(e-s)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    int* first=new int[len1];
    int* second=new int[len2];

    //copy valuess
    int mainarrayindex = s;
    for(int i=0; i<len1; i++){
        first[i]=arr[mainarrayindex];
        mainarrayindex++;
    }
    mainarrayindex= mid+1;
    for(int i=0; i<len2; i++){
        second[i]=arr[mainarrayindex];
        mainarrayindex++;
    }
    //Merge two sorted array
    int index1=0;
    int index2=0;
    mainarrayindex=s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainarrayindex]=first[index1];
            mainarrayindex++;
            index1++;
        }
        else{
            arr[mainarrayindex++]=second[index2++];
        }
    }
    while(index1<len1){
        arr[mainarrayindex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainarrayindex++]=second[index2++];
    }
    delete []first;
    delete []second;
}


void mergesort(int* arr, int s, int e){
    cout<<"sort fxn = ";
    for(int i=0; i<=e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(s>=e)
    return;

    int mid= s+(e-s)/2;
    //Left part sort
    mergesort(arr, s, mid);
    //Right part sort
     mergesort(arr, mid+1, e);
    //merge sorted array
     merge(arr, s, e);
}

int main(){
    int arr[7]={38,27,43,3,9,42,10};
    int s=0;
    int e=6;
    mergesort(arr, s, e);
    for(int i=0; i<=e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}