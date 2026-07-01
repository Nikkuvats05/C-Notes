#include <iostream>
#include<vector>
using namespace std;

bool search(vector<vector<int>>&matrix, int target){
    int row=matrix.size();
    int col=matrix[0].size();

    int rowindex=0;
    int colindex=col-1;
    while(rowindex<row&&colindex>=0){
        int element= matrix[rowindex][colindex];

        if(element==target){
            return 1;
        }
        else if(element<target){
            rowindex++;
        }
        else if(element>target){
            colindex--;
        }
    }
    return 0;

}

int main(){
    int row;
    int col;
    cout<<"enter the value of roa and col = ";
    cin>>row>>col;
    int target;
    cout<<"enter the value of targeted element =";
    cin>>target;

    vector<vector<int>>arr(row, vector<int>(col));

    cout<<"enter the value of elements = ";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    if(search(arr,target)){
        cout<<"targeted element is present ";
    }
    else{
         cout<<"targeted element is not present ";
    }
     

    }
