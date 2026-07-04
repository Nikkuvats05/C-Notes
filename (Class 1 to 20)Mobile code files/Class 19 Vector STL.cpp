#include <iostream>
#include <vector>
using namespace std ;
int main() {
//vector<int>v(5);
vector<int>v;
cout<<"Capacity is :"<<v.capacity()<<endl;

v.push_back(1);
v.push_back(2);
v.push_back(3);

cout<<"Size of vector is : "<<v.size()<<endl;
cout<<"Capacity is :"<<v.capacity()<<endl;
//Print vector
for(int i:v) {
cout<<i<<" ";
} 
cout<<endl;
cout<<"Element at 2nd index is :" <<v.at(2)<<endl;
cout<<"Element at first place is :" <<v.front()<<endl;
cout<<"Element at last place is :" <<v.back()<<endl;

v.pop_back();

for(int i:v) {
cout<<i<<" ";
} 
cout<<endl;

v.clear();

cout<<"Vector after clear is :" ;
for(int i:v) {
cout<<i<<" ";
} 
cout<<endl;

v.push_back(1);
v.push_back(2);
v.push_back(3);

vector<int>b(v);
for(int j:b) {
cout<<j<<" ";
} 
cout<<endl;


} 