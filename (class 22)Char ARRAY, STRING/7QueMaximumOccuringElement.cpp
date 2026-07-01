#include <iostream>
#include <string>
using namespace std;

char getmaxoccur(string s){
int arr[26]={0};

for(int i=0; i<s.length(); i++){
    char ch=s[i];
    int n=0;
    if(ch>='a'&&ch<='z'){
         n=ch-'a';
    }
    else{
        n=ch-'A';
    }
    arr[n]++;
}
int maxi=-1;
int ans=0;
for(int i=0; i<26; i++){
    if(maxi<arr[i]){
        ans=i;
        maxi=arr[i];
    }
}
char finalans='a'+ans;
return finalans;
}
int main(){
    string s="test";
    cout<<"most occur element is => "<<getmaxoccur(s)<<endl;
}
