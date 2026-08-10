#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(vector<string> nums, vector<vector<string>>&ans, int index){
    if(index>=nums.size()){
        ans.push_back(nums);
        return;
    }

    for(int j= index; j<nums.size(); j++){
        swap(nums[index], nums[j]);
        solve(nums, ans, index+1);
        //BACKTRACK
         swap(nums[index], nums[j]);
    }
}
int main(){
    vector<string> nums ={"a","b", "c"};
    vector<vector<string>>ans;
    int index=0;
    solve(nums, ans, index);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[0].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}