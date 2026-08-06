#include <iostream>
#include <vector>
#include <string>
using namespace std;

// i/p- srring="23" o/p- 2 and 3 se kitne  2 digit words bna skte h
// 2-"abc" & 3-"def"; o/p = {ad, ae, af, bd, be, bf, cd, ce, cf };

void solve(string digit, string output, int index, vector<string>& ans, string mapping[]){
    //Base case
    if(index>=digit.length()){
        ans.push_back(output);
        return;
    }
    int number=digit[index]-'0'; //Let 23 h string me and 2 a gaya [0] se bot vo char wala 2 h jsiki asci value 57 h to hme digit wala 2 lane ke liye char wali 0 munus krni pdegi asci value 55 to 57-55= int ka 2
    string value=mapping[number];

    for(int i=0; i<value.length(); i++){
        output.push_back(value[i]);
        solve(digit, output, index+1, ans, mapping);
        output.pop_back();
    }
}
int main(){
    string digit;
    cout<<"Enter the kaypad no = ";
    cin>>digit;
    vector<string>ans;
    if(digit.length()==0){
        cout<<" "<<endl;
    }
    string output;
    int index=0;
    string mapping[10]={"","", "abc","def","ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    solve(digit, output, index, ans, mapping);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
}