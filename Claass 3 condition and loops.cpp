#include <iostream>
using namespace std;

int main() {
/*

//Que 1

int a, b;

cout<< "enter the value of a and b "<< endl;


cin>> a >> b;


cout<<" value of a and b is"<<a<<" "<<b<<endl;

//Method 2

cout<< " value of a is" << endl;
cin>>a;

cout << " value of B is" <<endl;
cin>>b;


if(a>b) {
cout<< " a is greater" << endl;
}
if (b>a) {
cout<< " b is greater" << endl;
}

//Que 2

int a;
cout<< "enter the value of a"<< endl;
cin>>a;

if(a>0){
cout <<"a is positive" << endl;
} 
else if(a<0){
cout <<" a is - ve" << endl;
} 
else {
cout<<" a is 0"<< endl;
} 

//Que 3

char ch;
cout<<" enter the value of ch" << endl;
cin>>ch;

if(ch>='a' && ch<='z' ) {
cout<< " lower case" << endl;
} 
else if(ch>='A' && ch<='Z' ) {
cout <<" UPPERCASE" << endl;
} 
else if(ch>='1' && ch<='9') {
cout<< "Numeric case" << endl;
} 

else{ 
cout<< " special case" << endl;
} 

//Que 4

int n;
cin>>n;
int i=1;

while(i<=n){
cout<<i<<" " ;
i=i+1;
}

//Que 5

cout<< " enter the number to find sum from 1 to number" << endl;
int n;
cin>>n;
int i=1;
int sum=0;

while(i<=n){
sum=sum+i;
i=i+1;
} 
cout<<" value of sum is " <<sum;

*/
//Que 6

int n;
cin>>n;
int i=2;

while(i<n){
if(n%i==0){
cout<<" Not Prime for :"<<i <<endl;
} 
else{ 
cout<< "Prime for :"<<i <<endl;
} 
i=i+1;
}

} 