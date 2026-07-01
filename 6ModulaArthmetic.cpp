#include <iostream>
using namespace std;

// x,n,m are given => Finf (x^n)/m;
long long modula(long long x, long long n, long long m){
    int ans=1;
    while(n>0){
        if(n&1){
            ans=(ans*x)%m;
        }
        x=(x*x)%m;
       n= n>>1;
    }
    return ans;
}
int main(){
    long long x,n,m;
    cout<<"value of x,n,m are = ";
    cin>>x>>n>>m;
    cout<<"ans is = "<<modula(x,n,m);
}