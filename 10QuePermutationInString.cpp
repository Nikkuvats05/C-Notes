#include <iostream>
#include <string>
using namespace std;

bool checkequal(int a[26], int b[26]){
    for(int i=0; i<26; i++){
        if(a[i]!=b[i]){
            return 0;
        }
           }
            return 1;  
    }


bool checkinclude(string s1, string s2){
    int count1[26]={0};
    for(int i=0; i<s1.length(); i++){
        int index=s1[i]-'a';
        count1[index]++;
    }
        int i=0;
        int windowwise=s1.length();
        int count2[26]={0};
        while(i<windowwise && i<s2.length()){
            int index=s2[i]-'a';
            count2[index]++;
            i++;
        }
        if(checkequal(count1,count2)){
            return 1;
        }
    while(i<s2.length()){
        char newch=s2[i];
        int index=newch-'a';
        count2[index]++;
        char oldch=s2[i-windowwise];
        index=oldch-'a';
        count2[index]--;
        i++;
        if(checkequal(count1, count2)){
            return 1;
        }
        
    }
}
int main(){
    string s1="ab";
    string s2="eidbaoo";
    cout<<"any permutation of s1 comes in s2 is => "<<checkinclude(s1,s2)<<endl;
}


