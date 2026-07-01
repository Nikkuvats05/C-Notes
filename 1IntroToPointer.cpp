#include <iostream>
using namespace std;

int main(){
    int num =5;
    cout<<"Value of num is =" <<num<<endl;

    cout<<"Address of num is = "<<&num<<endl;

    int *ptr=&num;

    cout<<"Address of num is = "<<ptr<<endl;
    cout<<"Value of num is =" <<*ptr<<endl;

    char ch='a';
    char *p2=&ch;
    cout<<"value of ch is ="<<*p2<<endl;

    int *p3=0;
    p3=&num;
    cout<<"Value of num is =" <<*p3<<endl;

    (*ptr)++;
    cout<<"Value of num after *p++ is =" <<*ptr<<endl;

    cout<<"before ptr"<<ptr<<endl;
    ptr++;
    cout<<"after ptr++ =>"<<ptr<<endl;






}