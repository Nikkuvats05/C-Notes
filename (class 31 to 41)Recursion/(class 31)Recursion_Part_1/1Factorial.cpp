#include <iostream>
using namespace std;

int fact(int n){
    //Base case
    if(n==0){
        return 1;
    }
    int smallprob=fact(n-1);
    int bigprob=n*smallprob;
    return bigprob;

    //OR we can write direct without writting line 9 to 12
    // return (n*fact(n-1));
}
int main(){
    int n;
    cout<<"Value of n is = ";
    cin>>n;
    int ans=fact(n);
    cout<<endl<<ans<<endl;
}