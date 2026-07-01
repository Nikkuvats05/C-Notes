#include <iostream>
#include <vector>
using namespace std;

vector<int> printwave(int arr[][3], int n, int m){
    vector<int>ans;
    for(int c=0; c<m; c++){
    if(c&1){
        for(int r=n-1; r>=0; r--){
            cout<<arr[r][c]<<" ";
            ans.push_back(arr[r][c]);
        }
        
    }
    else{
        for(int r=0; r<n; r++){
            cout<<arr[r][c]<<" ";
            ans.push_back(arr[r][c]);
        }
    }
    
        
}
return ans;
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
    cout<<"printing in wave form =>"<<endl;
    printwave(arr,3,3);
}