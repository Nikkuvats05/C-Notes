#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralorder(vector<vector<int>>&matrix ){
    vector<int>ans;
    int row=matrix.size();
    int col=matrix[0].size();

    int count =0;
    int total=row*col;
    int startingrow=0;
    int startingcol=0;
    int endrow=row-1;
    int endcol=col-1;

    while(count<total){
        for(int index=startingcol; count<total&&index<=endcol; index++){
            ans.push_back(matrix[startingrow][index]);
            count++;
        }
        startingrow++;

        for(int index=startingrow; count<total&&index<=endrow; index++){
            ans.push_back(matrix[index][endcol]);
            count++;
        }
        endcol--;

        for(int index=endcol; count<total&&index>=startingcol; index--){
            ans.push_back(matrix[endrow][index]);
            count++;
        }
        endrow--;

        for(int index=endrow; count<total&&index>=startingrow; index--){
            ans.push_back(matrix[index][startingcol]);
            count++;
        }
        startingcol++;

    }
    return ans;
 
}

int main(){
    int row;
    int col;
    cout<<"value of row and col are = ";
    cin>>row>>col;

vector<vector<int>>arr(row, vector<int>(col));

cout<<"enter the value of elements = ";
for(int i=0; i<row; i++){
    for(int j=0; j<arr[i].size(); j++){
cin>>arr[i][j];
}
}  
cout<<"printing the array = "<<endl;
for(int i=0; i<row; i++){
    for(int j=0; j<arr[i].size(); j++){
cout<<arr[i][j];
}  
cout<<endl;
}
cout<<"printing the array in spiral order = "<<endl;

vector<int>result=spiralorder(arr);
for(int x:result){
    cout<<x<<" ";
}
}
