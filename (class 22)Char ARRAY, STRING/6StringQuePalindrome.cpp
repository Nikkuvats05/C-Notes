#include <iostream>
#include <string>
using namespace std;

//Que : Check is palidrone ,ignore all special ch, convert all to lower case ; i/p= " A man,A Place ,A canel Panama";

bool validch(char ch){
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')){
        return 1;
    }
    return 0;
}

char lower(char ch){
    if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')){
        return ch;
    }
    else{
        char t=ch-'A'+'a';
        return t;
    }
}
string ispal(string s) {
    string temp="";
for(int j=0; j<s.length(); j++){
    if(validch(s[j])){
        temp.push_back(s[j]);
    }
    
}

for(int j=0; j<temp.length(); j++){
    temp[j]=lower(temp[j]);
}
return temp;
}

bool checkpaldrom(string a){
    int s=0;
    int e=a.length()-1;
    while(s<e){
        if(a[s]!=a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
        return 1;

    
}
int main(){
    string s="A man,A Plan ,A canal Panama";
 string str= ispal(s);
    checkpaldrom(str);
cout<< "check pal or not =>"<< checkpaldrom(str)<<endl;
    }
/*
string str= ispal(s);
    if(checkpaldrom(str)){
    cout<<"check pal or not => 1 "<<endl;
    }
    else{
        cout<<"string pal or not => 0"<<endl;
    }
        */