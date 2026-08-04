#include <iostream>
#include <vector>
using namespace std;

// i/p- arr[3]={1,2,3};
// o/p- powerset- = {{}, {1}, {2}, {3}, {1,2}, {2,3}, {1,3}, {1,2,3}};

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>&ans){
     //Base case
     if(index>=nums.size()){
        ans.push_back(output);
        return;
     }
     //Exclude
     solve(nums, output, index+1, ans);

     //Include
     int element=nums[index];
     output.push_back(element);
     solve(nums, output, index+1, ans);
}
int main(){
    vector<int> nums(3);
    cout<<"Entel the elements = ";
    for(int i=0; i<3; i++){
        cin>>nums[i];
    }
     vector<vector<int>> ans;
     vector<int> output;
     int index=0;
    solve(nums, output, index, ans);
    cout<<"Hello"<<endl;
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
}