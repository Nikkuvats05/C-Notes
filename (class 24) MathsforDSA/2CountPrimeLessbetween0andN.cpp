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
    int countprime(int n){
        int count=0;
        for(int i=2; i<n; i++){
            if(isprime(i)){
                count++;
            }
        }
        return count;
    }

    int main(){
        int n;
        cout<<"value of n is =";
        cin>>n;
        int result=countprime(n);
        cout<<"Total primr no less than n are= "<<result;
    }