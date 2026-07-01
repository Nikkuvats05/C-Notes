#include <iostream>
using namespace std;

void reversech(char ch[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
}

int main(){
char ch[10];
cout<<"What is your name ? ";
cin>>ch;
cout<<"Your name is : "<<ch<<endl;

int count=0;
for(int i=0; ch[i]!='\0'; i++){
    count++;
}
int n=count;


reversech( ch, n);
cout<<"String after reverse => "<<ch;



}