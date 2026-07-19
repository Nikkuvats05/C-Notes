#include <iostream>
using namespace std;
int main(){

    int row,col;
    cout<<"Value of row and col are = ";
    cin>>row>>col;

    //Creating 2D array dynamically

    int **arr= new int*[row];
    
    for(int i=0; i<row; i++){
        arr[i]=new int[col];
    }
    //Taking input
    cout<<"Enter the value of elements "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
 cout<<endl;

    //Printing the 2D array
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Releasing the memory
    for(int i=0; i<row; i++){
        delete []arr[i];
    }
    delete []arr;
}