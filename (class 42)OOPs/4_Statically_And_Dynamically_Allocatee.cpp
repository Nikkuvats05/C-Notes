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
    //Statically
    hero h1;

     h1. sethealth(70);
    h1.setlevel('A');


    cout<<"health is = "<<h1.gethealth()<<endl;
    cout<<"level is = "<<h1.getlevel()<<endl;

   //Dynamically
   hero* h2= new hero;

   h2->sethealth(70);
   h2->setlevel('D');

    cout<<"health is = "<<(*h2).gethealth()<<endl;
    cout<<"level is = "<<(*h2).getlevel()<<endl;

    cout<<"Health method 2 is = "<<h2->gethealth()<<endl;
   
   

}