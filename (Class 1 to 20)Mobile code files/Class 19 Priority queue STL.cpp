#include <iostream>
#include <queue>
using namespace std ;
int main () {
//Max heap = output decending order me
priority_queue<int>pmax;

//Min heap = output acending order me
priority_queue<int, vector<int>, greater<int>>pmini;

pmax.push(1);
pmax.push(3);
pmax.push(5);
pmax.push(0);

cout<<"Max queue" <<endl;

int n=pmax.size();
for(int i=0; i<n; i++) {
cout<<pmax.top()<<" ";
pmax.pop();
}
cout<<endl;

pmini.push(1);
pmini.push(3);
pmini.push(5);
pmini.push(0);

cout<<"Mini queue" <<endl;

int m=pmini.size();
for(int i=0; i<m; i++) {
cout<<pmini.top()<<" ";
pmini.pop();
}
cout<<endl;


} 