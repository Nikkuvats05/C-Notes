#include <iostream>
using namespace std;

class hero{
   
    //Properties
    
    int health;
    char level;
    public:

    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void setlevel(char ch){
        level=ch;
    }
    void sethealth(int h){
        health=h;
    }


};
int main(){
    hero h1;

    cout<<"health is = "<<h1.gethealth()<<endl;
    cout<<"level is = "<<h1.getlevel()<<endl;

    h1. sethealth(70);
    h1.setlevel('A');

    cout<<"Setted health is = "<<h1.gethealth()<<endl;
    cout<<"Setted level is = "<<h1.getlevel()<<endl;

}