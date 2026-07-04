#include <iostream>
#include <map>
using namespace std ;
int main () {

map<int,string> m;

m[1] ="one";
m[2]="two";
m[3]="three";
m.insert({4,"four"});

cout<<"Is 3 present in map :" <<m.count(3)<<endl;

for(auto i:m) {
cout<<i.first<<" ";
}
cout<<endl;

for(auto j:m) {
cout<<j.first<<" "<<j.second<<endl;
}

m.erase(4);

cout<<"Print after iterator :" ;
auto it=m.find(3);
for(auto k=it; k!=m.end(); k++) {
cout<<(*k).first<<" ";
} 
cout<<endl;

} 