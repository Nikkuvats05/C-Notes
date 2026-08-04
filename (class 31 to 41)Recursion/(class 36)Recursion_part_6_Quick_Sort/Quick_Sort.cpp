#include <iostream>
using namespace std;

int partiation(int arr[], int s, int e){
     cout<<"partion fxn = ";
    for(int i=0; i<=e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int pivot=arr[s];
    int count=0;

    for(int i=s+1; i<=e; i++){
        if(arr[i]<pivot){
            count++;
        }
    }
    //Place pivot at right place
    int pivotindex=s+count;
    swap(arr[pivotindex], arr[s]);

    //Manage left and right part
    int i=s;
    int j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<pivot){
            i++;
        }
        while(j>pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotindex;
}

void quicksort(int *arr, int s, int e){
     cout<<"sort fxn = ";
    for(int i=0; i<=e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(s>=e)
    return;

    //Partiation
    int p=partiation(arr, s, e);

    //Recursive call
    quicksort(arr, s, p-1);
    quicksort(arr, p+1, e);
}

int main(){
    int arr[6]={2,3,2,5,6,4};
    int s=0;
    int e=5;
    quicksort(arr, s, e);

    cout<<endl<<endl;

    for(int i=0; i<=e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
}

