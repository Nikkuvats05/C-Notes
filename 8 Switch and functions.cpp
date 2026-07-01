/*
#include <iostream>
#include <math.h>
using namespace std;
int main() {

//Switch case 
int n=5;
switch(n) {
case 1: cout<<"one";
break;

case 5: cout<<"five";
break;
case 6: cout<<"six";
break;

default: cout<<"default";
} 
cout<<endl;

// Nested Switch

char c='a' ;
int n=3;
switch(c){
case 1:cout<<"one";
break;

case 'a' : switch(n) {
case 7: cout<<"seven" ;
break;

case 3: cout<<"three";
break;
} 
break;
} 


//Mini Calculator

int a,b;
cout<<"Value of a is :" ;
cin>>a;
cout<<"Value of b is :" ;
cin>>b;
char op;
cout<<"Enter the Operation you want to perform :" ;
cin>>op;

switch(op) {
case '+' : cout<<(a+b) ;
break;

case '-' : cout<<(a-b) ;
break;

case '*' : cout<<(a*b) ;
break;

case '/' : cout<<(a/b) ;
break;
case '%' : cout<<(a%b) ;
break;

default : cout<<"Enter a valid operation" ;
break;
}
 
//Que total money=1330,find no of notes rs 100,50,20 ans 1

int n;
cout<<"Value of n is:" ;
cin>>n;

int hun=(n/100);
cout<<"Total no of 100 rs notes is :" <<hun<<endl;

int r=(n%100);
if(r>=50){
int fif =(r/50);
cout<<"Total no of 50 rs notes is :" <<fif<<endl;
r=r%50;
} 
 if(r>=20){
int tw=(r/20);
cout<<"Total no of 20 rs notes is :" <<tw<<endl;
r=r%20;
}

if(r>=1){
int one=(r/1);
cout<<"Total no of 1 rs notes is : "<<one<<endl;
} 

//Use of switch case in upper que

int n;
cout<<"Value of n is:" ;
cin>>n;
int num=1;
switch(num){
case 1: cout<<"Total no of 100 rs notes is :" <<(n/100)<<endl;
n=n%100;
case 2: cout<<"Total no of 50 rs notes is :"<<(n/50)<<endl;
n=n%50;
case 3: cout<<"Total no of 20 rs notes is :"<<(n/20)<<endl;
n=n%20;
case 4: cout<<"Total no of 1 rs notes is :" <<(n/1)<<endl;
}

}
*/
//Function


#include <iostream>
using namespace std;
/*
//Making power fxn
int power(int a, int b) {
int ans=1;
for(int i=1; i<=b;i++) {
ans = ans*a;
} 
return ans;
} 




int main() {
int a, b;
cout<<"Value of a and b is :" ;
cin>>a>>b;
int ans= power(a,b) ;
cout<<"Answer is :" <<ans<<endl;
} 

// Check even or odd

//bool iseven(int n) {
//if(n&1){
//return 0;
//} 
//else {
//return 1;
//}
//}


int main() {
int n;
cout<<"Value of n is :" ;
cin>>n;
if(iseven(n)) {
cout<<"It is an even no" ;
} 
else {
cout<<"It is an odd no" ;
} 
} 


//Find value of nCr {nCr =((n!)/r!*(n-r)!)} 

int factorial(int n) {
int ans=1;
for(int i=1; i<=n; i++) {
ans =ans*i;
} 
return ans;
} 


int nCr(int n, int r) {
int num= factorial(n) ;
int den= (factorial(r)*factorial(n-r)) ;
int ans= (num/den) ;
return ans;
} 

int main() {
int n,r ;
cout<<"Value of n and r is :" ;
cin>>n>>r;
int ans= nCr(n,r) ;
cout<<"Value of nCr is :" <<ans<<endl;

} 

//Print counting
void count(int n) {
for(int i=1; i<=n; i++) {
cout<<i<<" ";
} 
} 


int main() {
int n;
cout<<"Value of n is :";
cin>>n;
count(n) ;
} 

// Check prime or not

bool isprime(int n) {
for(int i=2; i<n ;i++) {
if(n%i==0){

return 0;
}
else {
return 1;
}
}
} 
int main() {
int n;
cout<<"Value of n is :" ;
cin>>n;
if(isprime(n)) {
cout<<"It is a prime no" ;
} 
else {
cout<<"Not a prime no" ;
} 
} 



//Que AP=((3*n)+7)


int ap(int n) {
int ans= ((3*n)+7);
return ans;
} 


int main() {
int n;
cout<<"Value of n is :";
cin>>n;
int ans= ap(n) ;
cout<<"ans is :" <<ans<<endl;
}


//Que 2 Total no of set bits(1) in a and b 

int sets(int a, int b) {
int count1 =0;
int count2 =0;

while(a!=0){
if(a&1){
count1++;
} 
a=a>>1;

}
while(b!=0){
if(b&1){
count2++;
} 
b=b>>1;

}
int ans= count1 +count2;
return ans;
} 

int main() {
int a, b;
cout<<"Value of a is :" ;
cin >> a ;
cout<<"Value of b is :" ; 
cin>> b;
int ans= sets(a,b) ;
cout<<"Total no of set bits in a and b is :" <<ans<<endl;
} 


//Que Tell nth term of fibbonachi series

int fib(int n) {
int a=0;
int b=1;
int next;
if(n==1){
next=0;
}
if(n==2){
next=1;
}
for(int i=3;i<=n;i++){
next=(a+b) ;
a=b;
b=next;
} 
int ans=next;
return ans;
}  

int main() {
int n;
cout<<"Value of n is :" ;
cin>>n;
int ans = fib(n) ;
cout<<"Value of nth term is :" <<ans<<endl;
} 

*/

//Pass by value 
//ex 1
void update(int a) {
 a = a / 2;
}
int main() {
int a = 10;
update(a); // isme dhayan se dekho only update(a) value change nhi hui like in line 336
cout << a << endl;
} 
//output will be 10, no change but now in ex 2

int update(int a){
 int ans = a * a; return ans;
}
int main() {
int a = 14;
a = update(a); //isme a=update(a) h, value change hui a= ka use hua smjee
cout << a << end1;
} 
//Isme output 196 h 
    