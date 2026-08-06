#include <iostream>
#include <vector>
#include <string>
using namespace std;

// i/p- string= "abc";
// o/p- subsequence- = {" ", a, b, c, ab, bc, ab, abc};

void solve(string str, string output, int index, vector<string>&ans){
     //Base case
     if(index>=str.length()){
        ans.push_back(output);
        return;
     }
     //Exclude
     solve(str, output, index+1, ans);

     //Include
     char element=str[index];
     output.push_back(element);
     solve(str, output, index+1, ans);
}
int main(){
    string str;
    cout<<"Entel the elements = ";
   
        cin>>str;
    
     vector<string> ans;
      string output="";
     int index=0;
    solve(str, output, index, ans);
    cout<<"Hello"<<endl;
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
}