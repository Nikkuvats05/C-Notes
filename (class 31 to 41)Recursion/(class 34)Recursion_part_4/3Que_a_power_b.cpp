#include <iostream>
using namespace std;

// i/p= a=2, b=3; ans=8 or a=3, b=2; ans=9; aki power b
int power(int a, int b){
    if(b==0)
    return 1;
    if(b==1){
        return a;
    }
    int ans=power(a, b/2);
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
int main(){
    int a,b;
    cout<<"Enter value of a ans b = ";
    cin>>a>>b;
    cout<<endl;
    int ans=power(a,b);
    cout<<"Ans is = "<<ans;
}