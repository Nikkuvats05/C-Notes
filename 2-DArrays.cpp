#include <iostream>
using namespace std;
int main(){
    int arr[3][4];
    cout<<"Enter yhe value of elements in array => ";

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Printing the 2-D array => "<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int arr2[3][3]={1,2,3,4,5,6,7,8,9};

    int arr3[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

}