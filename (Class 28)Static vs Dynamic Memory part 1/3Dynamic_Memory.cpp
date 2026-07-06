#include <iostream>
using namespace std;
int main(){

    new char;
    char *ch=new char;
    cout<<"size of *ch is =  "<<sizeof(*ch)<<" "<<"and value of *ch is = "<<*ch<<endl;
    cout<<" "<<"value of ch is = "<<ch<<endl;

    new int;
    int *i=new int;
cout<<"size of *i is =  "<<sizeof(*i)<<" "<<"and value of *i is = "<<*i<<endl;
cout<<" "<<"value of i is = "<<i<<endl;
}