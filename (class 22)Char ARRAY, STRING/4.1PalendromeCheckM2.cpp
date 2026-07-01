#include <iostream>
using namespace std;
int main(){
char ch[]="abcba";
int n=0;
for(int i=0; ch[i]!='\0'; i++){
    n++;
}

int s=0;
int e=n-1;
cout<<"string yes or no => ";
bool ispan=1;
while(s<=e){

if(ch[s]!=ch[e]){
    ispan=false;
    break;
}
else{
    s++;
    e--;
}

}
if(ispan){
    cout<<"true";
}
else{
    cout<<"false";
    
}
}