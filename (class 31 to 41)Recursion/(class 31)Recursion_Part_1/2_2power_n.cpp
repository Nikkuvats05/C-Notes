#include <iostream>
using namespace std;
int power(int n){
    if(n==0){
        return 1;
    }
    return (2*power(n-1));
}
int main(){
    int n;
    cout<<"Value of n i.e power of 2 is = ";
    cin>>n;
    int ans=power(n);
    cout<<ans<<endl;
}