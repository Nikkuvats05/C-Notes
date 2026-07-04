#include <iostream>
using namespace std;
int main() {


/*

// Que 1
//❤️❤️❤️ 
//❤️❤️❤️ 
//❤️❤️❤️ 

int n;
cout<<"Value of n is:"; 
cin>>n;
int i=1;

while(i<=n){
int j=1;
while(j<=n){
cout<<"❤️";
j=j+1;
}
cout<<endl;
i=i+1;
}


//Que 2
//111
//222
//333

int n;
cout<<"Value of n is:"; 
cin>>n;

int i=1;

while(i<=n){

int j=1;
while (j<=n) {
cout<<i;
j=j+1;
}
cout<<endl;
i=i+1;
}


//Que 3
//123
//123
//123

int n;
cout<<"Value of n is:"<<; 
cin>>n;
int i=1;
while(i<=n) {
int j=1;
while(j<=n){
cout<<j;
j=j+1;
}
cout<<endl;
i=i+1;
}


//Que 4
//321
//321
//321

int n;
cout<<"Value of n is:"; 
cin>>n;
int i=1;
while(i<=n){
int j=1;
while(j<=n){
cout<<n-j+1;
j=j+1;
}
cout<<endl;
i=i+1;
}


//Que 5
//123
//456
//789

int n;
cout<<"Value of n is:"; 
cin>>n;
int i=1;
int count=1;
while(i<=n){
int j=1;
while(j<=n){
cout<<count<<" ";
count=count+1;
j=j+1;
}
cout<<endl;
i=i+1;
}


//Que 6
//❤️ 
//❤️❤️ 
//❤️❤️❤️ 

int n;
cout<<"Value of n is:"; 
cin>>n;
int i=1;
while(i<=n){
int j=1;
while(j<=i){
cout<<"❤️";
j=j+1;
}
cout<<endl;
i=i+1;
}


//Que 7
//1
//22
//333
//4444

int n;
cout<<"Value of n is:"; 
cin>>n;
int i=1;
while(i<=n){
int j=1;
while(j<=i){
cout<<i;
j=j+1;
}
cout<<endl;
i=i+1;
}


//Que 8
//1
//23
//456

int n;
cout<<"Value of n is:"; 
cin>>n;
int i=1;
int c=1;
while(i<=n){
int j=1;
while(j<=i){
cout<<c<<" ";
c=c+1;
j=j+1;
}
cout<<endl;
i=i+1;
} 


//Que 9
//1
//23
//345
//4567

int n;
cin>>n;
int i=1;

while(i<=n) {
int c=i;
int j=1;
while(j<=i){
cout<<c<<" ";
c=c+1;
j=j+1;
}
cout<<endl;
i=i+1;
} 
//Method 2

int n;
cin>>n;
int i=1;

while(i<=n) {

int j=1;
while(j<=i){
cout<<i+j-1<<" ";

j=j+1;
}
cout<<endl;
i=i+1;
}  


//Que 10
//1
//21
//321
//4321

int n;
cout<<"Value of n is:"<<endl; 
cin>>n;
int i=1;
while(i<=n){
int j=1;
while(j<=i){
cout<<i-j+1<<" ";
j=j+1;
}
cout<<endl;
i=i+1;
}


//Que 11
//AAA
//BBB
//CCC

int n;
cout<<"Value of n is:"; 
cin>>n;
char ch='A';
int i=1;
while(i<=n){
int j=1;
while(j<=n){
cout<<ch<<" ";
j=j+1;
}
cout<<endl; 
ch=ch+1;
i=i+1;
}

//Method 2

int n;
cout<<"Value of n is:"; 
cin>>n;
int i=1;

while(i<=n){
int j=1;
char c='A'+i-1;
while(j<=n){
cout<<c<<" ";
j=j+1;
}
cout<<endl;
i=i+1;
}


//Que 12
//ABC
//ABC
//ABC

int n;
cout<<"Value of n is :";
cin>>n;
int i=1;

while(i<=n) {
int j=1;
char c='A';
while(j<=n) {
cout<<c;
c=c+1;
j=j+1;
}
cout<<endl;
i=i+1;
}

//Method 2

int n;
cout<<"Value of n is :" ;
cin>>n;
int i=1;

while(i<=n){
int j=1;

while(j<=n){
char c='A'+j-1;
cout<<c<<" ";
j=j+1;
}
cout<<endl;
i=i+1;
}


//Que 14
//ABC
//DEF
//GHI

int n;
cout<<" Value of n is :";
cin>>n;
int i=1;
char c='A' ;
while(i<=n){
int j=1;
while(j<=n){
cout<<c<<" ";
c=c+1;
j=j+1;
}
cout<<endl;
i=i+1;
}

// Que 15
//ABC
//BCD
//CDE

int n;
cout<<" Value of n is :" ;
cin>>n;
int i=1;
while(i<=n){
int j=1;
while(j<=n){
char c='A'+i+j-2;
cout<<c<<" ";
j=j+1;
}
cout<<endl;
i=i+1;
}


//Que 16
//A
//BB
//CCC

int n;
cout<<"Value of n is: " ;
cin>>n;
int i=1;
while(i<=n){
int j=1;
while(j<=i){
char c='A'+i-1;
cout<<c<<" ";
j=j+1;
}
cout<<endl;
i=i+1;
}


//Que 17
//A
//BC
//DEF

int n;
cout<<"Value of n is" ;
cin>>n;
int i=1;
char c='A';
while(i<=n) {
int j=1;
while(j<=i){
cout<<c<<" ";
c=c+1;
j=j+1;
}
cout<<endl;
i=i+1;
}


//Que 18
//A
//BC
//CDE
//DEF

int n;
cout<<"value of n is" ;
cin>>n;
int i=1;
while(i<=n){
int j=1;
while(j<=i){
char c='A'+i+j-2;
cout<<c<<" ";
j=j+1;
}
cout<<endl;
i=i+1;
}


//Que 19
//D
//CD
//BCD
//ABCD

int n;
cout<<"Value of n is :" ;
cin>>n;
int i=1;
while(i<=n){
int j=1;
while(j<=i){
char c='A'+j-i+3;
cout<<c<<" ";
j=j+1;
}
cout<<endl;
i=i+1;
}


//Que 20
//      ❤️ 
//    ❤️❤️ 
//  ❤️❤️❤️ 
//❤️❤️❤️❤️ 

int n;
cout<<"Value of n is :" ;
cin>>n;
int i=1;
while(i<=n){
//Pehle space print krna h
int space= n-i;
while(space) {
cout<<" "  ;
space=space-1;
}
//Ab ❤️ print krna h
int j=1;
while(j<=i){
cout<<"❤️" ;
j=j+1;
}
cout<<endl;
i=i+1;
}

//Space kaise print hota h logic
int n;
cin>>n;
int i=1;

while(i<=n) {
int j=n-i;
while(j){
cout<<"❤️" <<" ";

j=j-1;
}
cout<<endl;
i=i+1;
}


//Que 21
//❤️❤️❤️❤️ 
//❤️❤️❤️ 
//❤️❤️ 
//❤️ 

int n;
cout<<"Value of n is :" ;
cin>>n;
int i=1;
while(i<=n){
int j=n-i+1;
while(j>0){
cout<<"❤️" <<""  ;
j=j-1;
}
cout<<endl;
i=i+1;
}

//Que 22
//❤️❤️❤️❤️ 
//  ❤️❤️❤️ 
//    ❤️❤️ 
//      ❤️ 

int n;
cout<<"Value of n is :" ;
cin>>n;
int i=1;
while(i<=n){
int space=n+i-5;
while(space){
cout<<" ";
space =space-1;
}

int j=n-i+1;
while(j){
cout<<"❤️" ;
j=j-1;
}
cout<<endl;
i=i+1;
}

//Que 23
//1111
// 222
//  33
//   4

int n;
cout<<"Value of n is";
cin>>n;
int i=1;
while(i<=n){
int s=i-1;
while(s){
cout<<" "  ;
s=s-1;
}
int j=n-i+1;
while(j){
cout<<i;
j=j-1;
}
cout<<endl;
i=i+1;
}


//QUE 24
//   1
//  22
// 333
//4444

int n;
cout<<"Value of n is :" ;
cin>>n;
int i=1;
while(i<=n){
int s=n-i;
while(s) {
cout<<" ";
s=s-1;
}
int j=i;
while(j) {
cout<<i;
j=j-1;
}
cout<<endl;
i=i+1;
}


//QUE 25
//1234
// 234
//  34
//   4

int n;
cout<<"Value of n is :" ;
cin>>n;
int i=1;
while(i<=n){
int c=i;
int s=i-1;
while(s){
cout<<" ";
s=s-1;
}
int j=n-i+1;
while(j){
cout<<c;
c=c+1;
j=j-1;
}
cout<<endl;

i=i+1;
}


//QUE 26
//   1
//  23
// 456
//78910

int n;
cout<<"Value of n is :" ;
cin>>n;
int i=1;
int c=1;
while(i<=n){
int s=n-i;
while(s) {
cout<<" ";
s=s-1;
}
int j=i;
while(j) {
cout<<c;
c=c+1;
j=j-1;
}
cout<<endl;

i=i+1;
}

 
 //QUE 27
 //   1
 //  121
 // 12321
 //1234321
 
 int n;
 cout<<"Value of n is :" ;
 cin>>n;
 int i=1;
 
 while(i<=n){
 int c=1;
 
 int s=n-i;
 while(s) {
 cout<<" ";
 s=s-1;
 }
 int j=i;
 while(j) {
 cout<<c;
 c=c+1;
 j=j-1;
 } 
 //int r=i-1;
 int k=i-1;
 while(k){
 cout<<k;
 //r=r-1;
 k=k-1;
 }
 cout<<endl;
 i=i+1;
 }
 
 
 //QUE 28
 //1234554321
 //1234**4321
 //123****321
 //12******21
 //1********1
 
 int n;
 cout<<"Value of n is :" ;
 cin>>n;
 int i=1;
 while(i<=n){
 int c=1;
 int j=n-i+1;
 while(j){
 cout<<c;
 c=c+1;
 j=j-1;
 }
 int k=i-1;
 while(k){
 cout<<"*";
 k=k-1;
 }
 int l=i-1;
 while(l){
 cout<<"*";
 l=l-1;
 } 
 int m=n-i+1;
 while(m){
 cout<<m;
 m=m-1;
 }
 cout<<endl;
 i=i+1;
 }
 
 // Method 2 (short) 
 int n;
 cout<<"Value of n is :" ;
 cin>>n;
 int i=1;
 while(i<=n){
 int c=1;
 int j=n-i+1;
 while(j){
 cout<<c;
 c=c+1;
 j=j-1;
 }
 int k=2*(i-1);
 while(k){
 cout<<"*";
 k=k-1;
 }
 
 int m=n-i+1;
 while(m){
 cout<<m;
 m=m-1;
 }
 cout<<endl;
 i=i+1;
 } 
 */



}