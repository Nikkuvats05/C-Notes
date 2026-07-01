#include <iostream>
using namespace std;
void reversech(char ch[], int n){
int s=0;
int e=n-1;
while(s<=e){
    swap(ch[s],ch[e]);
    s++;
    e--;
}
}

bool checkpal(char ch[],int n){
char temp[100];
for(int i=0; i<n; i++){
    temp[i]=ch[i];
}
reversech(temp,n);

for(int i=0; i<n; i++){
    if(ch[i]!=temp[i]){
        return false;
    }
    else{
        return true;
    }
}
}
int main(){
char ch[]="abcba";
int count =0;
for(int i=0; ch[i]!='\0'; i++){
    count++;
}
int n=count;
cout<<"This ch array is paradrom or not => "<<checkpal(ch,n);


}