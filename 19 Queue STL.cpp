#include <iostream>
#include <queue>
using namespace std ;
int main () {

queue<string>q;
//queue= first in first out

q.push("one" );
q.push("two" );
q.push("three" );
q.push("four" );

cout<<"Size of queue is :" <<q.size()<<endl;
cout<<"First element of queue is : "<<q.front()<<endl;
cout<<"Last element of queue is : "<<q.back()<<endl;

q.pop();

cout<<"First element of queue after pop is : "<<q.front()<<endl;
cout<<"Size of queue after pop is :" <<q.size()<<endl;

} 