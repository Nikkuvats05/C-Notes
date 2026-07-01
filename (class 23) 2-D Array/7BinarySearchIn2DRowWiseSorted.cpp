#include <iostream>
#include <vector>
using namespace std;

bool searchmatrix(vector<vector<int>>&matrix, int target){
    int row=matrix.size();
    int col=matrix[0].size();
    int s=0;
    int e=row*col-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        int element= matrix[mid/col][mid%col];
        if(element==target){
            return 1;
        }
        else if(element<target){
            s=mid+1;
        }
        else if(element>target){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return 0;
}

int main(){
    int row;
    int col;
    cout<<"enter the alue of row and column = ";
    cin>>row>>col;
    int target;
    cout<<"enter the value of target = ";
    cin>>target;

    vector<vector<int>>arr(row, vector<int>(col));

    cout<<"enter the value of elements = ";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"printing the array = "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
if(searchmatrix(arr,target)){
    cout<<"target element is present"<<endl;
}
else{
    cout<<"element is not present "<<endl;
}
}