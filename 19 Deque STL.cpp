#include <iostream>
#include <deque>
using namespace std ;
int main() {
deque<int>d;

d.push_back(1);
d.push_front(2);

for(int i:d) {
cout<<i<<" ";
}
cout<<endl;

d.pop_front();
d.pop_back();

cout<<"Deque after pop is :" <<endl;
for(int i:d) {
cout<<i<<" ";
}
cout<<endl;

d.push_back(1);
d.push_front(2);

cout<<"Element at 1st index is :" <<d.at(1)<<endl;
cout<<"Element at 1st place is :" <<d.front()<<endl;
cout<<"Element at last place is :"<<d.back()<<endl;
cout<<"Deque is empty or not is :"<<d.empty()<<endl;

d.erase(d.begin(),d.begin()+1);
cout<<"Deque after erase is :" <<endl;
for(int i:d) {
cout<<i<<" ";
}
cout<<endl;

} 