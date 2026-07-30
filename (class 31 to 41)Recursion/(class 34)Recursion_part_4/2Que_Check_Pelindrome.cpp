#include <iostream>
#include <string>
using namespace std;

bool check(string str, int s, int e){
    if( s>e){
        return true;
    }
    if(str[s]!=str[e]){
    return false;
    }
    s++;
    e--;
   return check(str, s, e);
}

int main(){
    string s="BookkooB";
      bool ans= check(s, 0, s.length()-1);
      if(ans){
        cout<<"Yes its Pelindrome"<<endl;
      }
      else{
        cout<<"No its not a Pelindrome"<<endl;
      }
   
     
}