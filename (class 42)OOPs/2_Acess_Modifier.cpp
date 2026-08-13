#include <iostream>
using namespace std;

class hero{
   
    //Properties
    public:
    int health;
    char level;

};
int main(){
    hero h1;

    cout<<"health is = "<<h1.health<<endl;
    cout<<"level is = "<<h1.level<<endl;

    h1.health=70;
    h1.level='A';

    cout<<"Updated health is = "<<h1.health<<endl;
    cout<<"Updated level is = "<<h1.level<<endl;

}