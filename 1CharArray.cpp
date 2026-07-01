#include <iostream>
using namespace std;

int main(){
char ch[10];
cout<<"What is your name ? ";
cin>>ch;
cout<<"Your name is : "<<ch<<endl;

ch[2]='\0';
cout<<"printing after null charcater => "<<ch;



}