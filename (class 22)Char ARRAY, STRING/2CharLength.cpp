#include <iostream>
using namespace std;

int main(){
char ch[10];
cout<<"What is your name ? ";
cin>>ch;
cout<<"Your name is : "<<ch<<endl;
int count=0;
for(int i=0; ch[i]!='\0'; i++){
    count++;
}
cout<<"Length of string is : "<<count;

}