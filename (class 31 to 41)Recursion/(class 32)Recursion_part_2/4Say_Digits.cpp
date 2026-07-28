#include <iostream>
using namespace std;
// i/p= 412 ; o/p=Four one two

void say(int n){
    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    if(n==0){
        return;
    }
    int digit=n%10;
    n=n/10;
    say(n);
    cout<<arr[digit]<<" ";
}
int main(){
    int n;
    cout<<"Value of n is = ";
    cin>>n;
    say(n);
    
}