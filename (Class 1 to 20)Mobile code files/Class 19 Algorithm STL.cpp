#include <iostream>
#include <algorithm>
#include <vector>
using namespace std ;
int main () {
vector<int>v;

v.push_back(1);
v.push_back(3);
v.push_back(6);
v.push_back(7);

cout<<"Print vector : "; 
for(int i:v) {
cout<<i<<" ";
} 
cout<<endl;

cout<<"Search 6 : "<<binary_search(v.begin(), v.end(), 6)<<endl;

cout<<"Lower bound of 6 is at index : "<<lower_bound(v.begin(),v.end(), 6)-v.begin()<<endl;
cout<<"Upper bound of 4 is at index: "<<upper_bound(v.begin(),v.end(), 4)-v.begin()<<endl;

rotate(v.begin(),v.begin()+1,v.end()) ;

cout<<"Print vector after rotate : ";
for(int i:v) {
cout<<i<<" ";
} 
cout<<endl;

sort(v.begin(), v.end()) ;

cout<<"Print vector after sort : ";
for(int i:v) {
cout<<i<<" ";
} 
cout<<endl;


string s="abcd" ;
reverse(s.begin(), s.end()) ;

for(char j:s) {
cout<<j<<" ";
} 
cout<<endl;




}