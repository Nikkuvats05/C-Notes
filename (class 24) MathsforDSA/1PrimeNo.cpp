#include <iostream>
using namespace std;

bool isprime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
            return true;
        
    }


int main(){
    int n;
    cout<<"value of n is =";
    cin>>n;
    if(isprime(n)){
        cout<<"given no is prime";
    }
    else{
        cout<<"given no is not prime";
    }
}