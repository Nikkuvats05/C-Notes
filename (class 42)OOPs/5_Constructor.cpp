#include <iostream>
using namespace std;

class hero{
     public:

    //Constractor
    hero(){
        cout<<"Constructor called"<<endl;
        name = new char[100];
    }

    //Parametric Constructor
    hero(int health){
        cout<<"this -> = "<<this<<endl;
        this-> health=health;
    }

    hero(int health, char level){
        this-> level= level;
        this-> health= health;
    }

    //Copy constructor
    hero(hero & temp){
        cout<<"copy constructor called "<<endl;
        this->health= temp.health;
        this->level= temp.level;
    }

    void print(){
        cout<<"health is = "<<this-> health<<endl;
         cout<<"level is = "<<this-> level<<endl;
    }
   
    //Properties
    char*name;
    int health;
    char level;
   

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
    //statically
    
    //h1 wala para,etric constructor ko call krega
    hero h1(70);
    cout<<"Address of h1 is = "<<&h1<<endl;

      // h2 hero simle constructor ko call krega
       hero h2;

       //Dynamically
       hero *h3 = new hero(90);

       hero S(50, 'C');
       S.print();

       hero R(S);
       R.print();

}