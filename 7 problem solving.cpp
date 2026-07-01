#include <iostream>
#include <math.h>
using namespace std;
int main() {
/*
//Reverse integer (normal case) 
int n;
cout<<"Value of n is :" ;
cin>>n;
int ans =0;
while(n!=0){
int digit = n%10;
ans = (ans*10)+digit;
n=n/10;
}
cout<<ans<<endl;

//Special case when ans<or> then int max or min
int n;
cout<<"Value of n is" ;
cin>>n;
int ans=0;
while(n!=0){
int digit =n%10;
if( (ans>INT_MAX/10) || (ans<INT_MIN/10)) {
cout<<"00zero"<<endl;
}
ans = (ans*10)+digit;
n=n/10;
} 
cout<<ans<<endl;


//Qur : Complement of base 10 integer, n=5=101; 1st Comp=010=2, ans =2.

int n;
cout<<"Value of n is" ;
cin>>n;
//int m=n isliye kiya kyuki jb loop me n=0 ho jayga tb last me 
//ans me vo n ki 0 value hi utha laga pr hmne loop anly mask create
// krne ke liya chalaya tha mne n is original value hi chaiye so hmne
// m ko n ke roop me store kr liya. 
int m=n;
int mask=0;
// 0 ka complement=1
if(n==0){
cout<<1;
}
while(n!=0) {
mask = (mask<<1)|1;
n=n>>1;
}
int ans= ((~m)&mask) ;
cout<<"ans is :" <<ans<<endl;

*/
//Que : Is number n a power of 2

int n;
cout<<"Value of n is :" ;
cin>>n;
bool p=0;
for(int i=0;i<=30;i++){
int ans = pow(2,i);
if(ans==n){
p= 1;
break;
}
} 
if(p==1){
cout<<"true";
}
else {
cout<<"false" ;
}


} 