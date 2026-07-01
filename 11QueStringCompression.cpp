#include<iostream>
#include<string>
#include <vector>
using namespace std;

int compress(vector<char>&ch){
    int i=0;
    int n=ch.size();
    int ansIndex=0;

    while(i<n){
        int j=i+1;
        while(j<n && ch[i]==ch[j]){
            j++;
        }
        ch[ansIndex++]=ch[i];
        int count= j-i;
        if(count>1){
            string s=to_string(count);
            for(char chas:s){
                ch[ansIndex++]=chas;
            }
  }
        i=j;
    }
    return ansIndex;
}
int main(){
    vector<char>ch={'a','a','b','b','c','c','c'};
    int size=compress(ch);
    cout<<"o/p after compress => "<<compress(ch)<<endl;
    for(int i=0; i<size; i++){
        cout<<ch[i];
    }
}