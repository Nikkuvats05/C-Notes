#include <iostream>
#include <array>
using namespace std ;

int main () {
array<int,4> arr={1,2,3,4};

int size=arr.size();

for(int i=0; i<size; i++) {
cout<<arr[i]<<" ";
} 
cout<<endl;
cout<<"element at 2nd index is :"<<arr.at(2)<<endl;
cout<<"Empty or not - >" <<arr.empty()<<endl;

cout<<"First element of array is :" <<arr.front()<<endl;
cout<<"Last element of array is :" <<arr.back()<<endl;


} 
