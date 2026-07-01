#include <iostream>
using namespace std;

    void printsum(int arr[][3], int i, int j){
        for(int i=0; i<3; i++){
            int sum=0;
            for(int j=0; j<3; j++){
                sum=sum+arr[i][j];
            }
        
        cout<<sum<<" ";
        }
    }
int main(){
    int arr[3][3];
    cout<<"Enter yhe value of elements in array => ";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Printing the 2-D array => "<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    printsum(arr,3,3);

}
