#include <iostream>
using namespace  std;
int main(){

    int i=5;
    int *p=&i;
    int** p2=&p;
cout<<endl;
    cout<<"printing i ="<<i<<endl;
    cout<<"printing *p = "<<*p<<endl;
    cout<<"printing **p2 = "<<**p2<<endl;
cout<<endl;
    cout<<"printing &i = "<<&i<<endl;
    cout<<"printing p = "<<p<<endl;
    cout<<"printing *p2 = "<<*p2<<endl;
cout<<endl;    
    cout<<"printing &p = "<<&p<<endl;
    cout<<"printing p2 = "<<p2<<endl;
cout<<endl;
    cout<<"printing &p2 = "<<&p2<<endl<<endl;
 
        
}
