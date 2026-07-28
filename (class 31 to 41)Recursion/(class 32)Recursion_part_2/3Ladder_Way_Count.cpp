#include <iostream>
using namespace std;
//ek timr pr ya to 1 jump lga skta h ya 2 jump ,nth ladder pr jane ke liye
// total no of possible ways count krne h;

int way(int n){
    if(n<0)
    return 0;
    if(n==0)
    return 1;
    //nth ladder pr ya to (n-1) ladder se aya hoga ya (n-2) ladder se
    int ans=way(n-1)+way(n-2);
    return ans;
}
int main(){
    int n;
    cout<<"Value of n is = ";
    cin>>n;
    int ans= way(n);
    cout<<"Total no of possible ways = "<<ans<<endl<<endl;
}