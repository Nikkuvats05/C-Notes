#include <iostream>
#include <set>
using namespace std ;
int main () {

set<int>s;

s.insert(5);
s.insert(1);
s.insert(6);
s.insert(0);

cout<<"is 5 present in set? " <<s.count(5)<<endl;

//Print set
for(auto i:s) {
cout<<i<<" ";
}
cout<<endl;

s.erase(s.begin());

cout<<"Print after begin erase is :" ;
for(auto i:s) {
cout<<i<<" ";
}
cout<<endl;

cout<<"Print after iterator found 5 is : " ;

set<int> :: iterator itr=s.find(5);
for(auto it=itr; it!=s.end(); it++) {
cout<<*it<<" ";
} 
cout<<endl;


} 