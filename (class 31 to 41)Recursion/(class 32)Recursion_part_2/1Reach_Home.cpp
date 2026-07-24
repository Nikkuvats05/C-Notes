#include <iostream>
using namespace std;
void reach(int source,int dest){
    cout<<"Source"<<" "<<source<<" "<<"Destination"<<" "<<dest<<endl;
      if(source==dest){
        cout<<"Poch gyee"<<endl;
        return;
      }
      source++;
      reach(source,dest);
    }
    int main(){
        int start=1;
        int dest=10;
        reach(start,dest);
    }