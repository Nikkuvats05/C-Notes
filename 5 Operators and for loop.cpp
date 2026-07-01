#include <iostream>
using namespace std;
int main() {

/*
//Bitwise Oprators
int a = 4;
    int b = 6;

    cout<<" a&b " << (a&b) << endl;
    cout<<" a|b " << (a|b) << endl;
    cout<<" ~a " << ~a << endl;
    cout<<" a^b " << (a^b) << endl;

//Left and right shift
    cout<< (17>>1)<<endl;
    cout<< (17>>2) <<endl;
    cout<< (19<<1) <<endl;
    cout<< (21<<2) <<endl;

//Increment and decrement
    int i = 7;

    cout<< (++i) <<endl;
    // 8 
    cout<< (i++) <<endl;
    // 8 , i = 9
    cout<< (i--) <<endl;
    //9 , i = 8 
    cout<< (--i) <<endl; 
    // 7, i =7



//Que
int a=1;
int b=2;
if(a-->0 && ++b>2) {
cout<<"Stage 1 :" ;
}
else{
cout<<"Stage 2";
}
cout<<a<<" "<<b<<endl;

//Que 
int a=10;
int b=1;
if(++a){
cout<<b;
}
else{
cout<<++b;
}


//QUE 
int a=1;
int b=a++;
int c=++a;
cout<<b<<" "<<c;


//Que imp

int a=1;
int b=2;
if(a-->0 || ++b>2){
cout<<"Stage 1 :" ;
} 
else {
cout<<"Stage 2 :" ;
} 
cout<<a<<" "<<b;


//For loop
//Print counting

int n;
cout<<"Value of n is :" ;
cin>>n;

for(int i=1;i<=n;i++){
cout<<i<<" ";
} 

//Sum from 1 to n

int n;
cout<<"Value of n is :" ;
cin>>n;
int sum=0;
for(int i=1;i<=n;i++){
sum=sum+i;
}
cout<<sum;

//Fibonacci series(0,1,1,2,3,5,8,13,21,34)

int n;
cout<<"Value of n is :" ;
cin>>n;
int a=0;
int b=1;
cout<<a<<" "<<b;
for(int i=1;i<=n;i++) {
int next =a+b;
cout<<next<<" ";
a=b;
b=next;
}
 
 
 //Check prime and use of break
 
 int n;
 cout<<"Value of n is :" ;
 cin>>n;
 bool prime=1;
 for(int i=2;i<n;i++){
 if(n%i==0){
 prime =0;
 break;
 }
 }
 if(prime==0){
 cout<<"Not a prime no"<<endl;
 } 
 else {
 cout<<"is a prime no" <<endl;
 }
 
 
 //Continue
 
 int n;
 cout<<"Value of n is :" ;
 cin>>n; 
 for(int i=1;i<=n;i++){
 cout<<"Hi"<<endl;
 cout<<"Hey"<<endl;
 continue;
 cout<<"reply"<<endl;
 }
 
 
 //Leetcode Que
 // n=234, Product of digits-sum of digits? 
 
 int n=234;
 int sum=0;
 int p=1;
 while(n!=0){
 
 int d=n%10;
 p=p*d;
 sum=sum+d;
 
 n=n/10;
 }
 cout<<p-sum;
 
 */
 //Que 2 Count no of 1 bits in no=11
 
 int n=11;
 int count=0;
 while(n!=0){
 if(n&1){
 count++;
 }
 n=n>>1;
 }
 cout<<count;
 
 // Is que me code diya tha and mujhe output batana tha
 int i=0;
 int j=i;
 for(int i=0;i<5;i++){
 for(int j=i;j<=5;j++){
 if(i+j==10){
 break;
 }
 cout<<i<<" "<<j <<endl;
 } 
 } 
 
 
 
} 