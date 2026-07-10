#include <iostream>
using namespace std;

    void update(int n){
        n++;
    }
    void update2(int& n){
        n++;
    }

    int main(){
        int i=5;
        cout<<"before update i = "<<i<<endl;
        update(i);
         cout<<"after update i = "<<i<<endl<<endl;

         cout<<"before update2 i = "<<i<<endl;
         update2(i);
          cout<<"after update2 i = "<<i<<endl;
    }
