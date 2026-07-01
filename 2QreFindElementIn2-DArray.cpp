#include <iostream>
using namespace std;

bool ispresent(int arr[3][4], int target, int row, int col){
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            if(arr[row][col]==target){
                return 1;
            }
        }
    }
    return 0;

}
int main(){
    int arr[3][4];
    cout<<"Enter the value of elementa of array =>"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cout<<"Enter the value of target element =>";
    cin>>target;
    if(ispresent(arr,target,3,4)){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }

}