#include <iostream>
#include <stack>
using namespace std;
int main() {

stack<string>s;
//stack= last in first out

s.push("one" );
s.push("two" );
s.push("three" );
s.push("four" );

cout<<"Size of stack is :" <<s.size()<<endl;

cout<<"Top element is :" <<s.top()<<endl;

s.pop();

cout<<"Top element is :" <<s.top()<<endl;

cout<<"Empty or not" <<s.empty()<<endl;

} 