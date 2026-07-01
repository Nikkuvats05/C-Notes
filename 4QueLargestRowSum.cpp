#include<iostream>
#include <algorithm>
#include <climits>

using namespace std;

int largestsum(int arr[][3], int row, int col){
    int maxi= INT_MIN;
    int rowindex=-1;
    for(row=0; row<3; row++){
        int sum=0;
        for(int col=0; col<3; col++){
            sum =sum+arr[row][col];
        }
        if(sum>maxi){
            maxi=sum;
            rowindex=row;
        }
    }
    cout<<" maximum sum is = "<<maxi<<endl;
    cout<<"maximum sum is at rowindex ="<<rowindex<<endl;

}

int main(){
    int arr[3][3];
    cout<<"enter the value of elements of array is =. ";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
    cin>>arr[i][j];
        }
    }
    cout<<"Printing the array =>"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
    cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    largestsum(arr,3,3);
}