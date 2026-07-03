#include <iostream>
using namespace std;

int main(){
    int arr[10]={2,5,6,7,11};

    cout<<"Address of 1st memory block is = "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Address of 1st memory block is = "<<&arr[0]<<endl;

    cout<<"Playing with Pointer 1st = "<<*arr<<endl;
    cout<<"Playing with pointer 2nd = "<<(*arr)+1<<endl;
    cout<<"Playing with pointer 3rd = "<<*(arr+1)<<endl;

    int i=3;
    cout<<"Playing with pointer 4th = "<<i[arr]<<endl;
    cout<<"Playing with pointer 5th = "<<*(arr+3)<<endl;

    cout<<"Playing with size start "<<endl;

    int temp[10]={1,2,3,4,5};
    cout<<"1st = "<<sizeof(temp)<<endl;
    cout<<"2nd = "<<sizeof(&temp)<<endl;
    cout<<"3rd = "<<sizeof(*temp)<<endl;

    int *ptr=&temp[0];
    cout<<"4th = "<<sizeof(ptr)<<endl;
    cout<<"5th = "<<sizeof(*ptr)<<endl;
    cout<<"6th = "<<sizeof(&ptr)<<endl;

    cout<<"& oprator start "<<endl;

    int a[5]={1,2,3,4,5};
    cout<<"1st = "<<&a<<endl;
    cout<<"2nd = "<<&a[0]<<endl;
    cout<<"3rd = "<<a<<endl;

    int *p=&a[0];
    cout<<"4th = "<<&p<<endl;
    cout<<"5th = "<<*p<<endl;
    cout<<"6th = "<<p<<endl;
}