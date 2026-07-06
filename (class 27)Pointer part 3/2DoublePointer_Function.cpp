#include <iostream>
using namespace std;

void update1(int **p){
    p=p+1;
}

void update2(int** p){
    *p=*p+1;
}

void update3(int **p){
    **p=**p+1;
}

int main(){
    int i=5;
    int *p=&i;
    int **p2=&p;
cout<<endl;
    cout<<"before update 1, i= "<<i<<endl;
    cout<<"before update 1, p= "<<p<<endl;
    cout<<"before update 1, p2= "<<p2<<endl;
    update1(p2); cout<<endl;
    cout<<"after update 1, i= "<<i<<endl;
    cout<<"after update 1, p= "<<p<<endl;
    cout<<"after update 1, p2= "<<p2<<endl<<endl;

    
    cout<<"before update 2, i= "<<i<<endl;
    cout<<"before update 2, p= "<<p<<endl;
    cout<<"before update 2, p2= "<<p2<<endl;
    update2(p2); 
    cout<<"after update 2, i= "<<i<<endl;
    cout<<"after update 2, p= "<<p<<endl;
    cout<<"after update 2, p2= "<<p2<<endl<<endl;

    cout<<"before update 3, i= "<<i<<endl;
    cout<<"before update 3, p= "<<p<<endl;
    cout<<"before update 3, p2= "<<p2<<endl;
    update3(p2); 
    cout<<"after update 3, i= "<<i<<endl;
    cout<<"after update 3, p= "<<p<<endl;
    cout<<"after update 3, p2= "<<p2<<endl<<endl;

}

