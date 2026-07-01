#include <iostream>
using namespace std;
void printar(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int arr[]={11,12,13,14,15};
int key=2;
int n=5;
int temp[5];

for(int i=0; i<n; i++) {
temp[((i+key)%n)]=arr[i];


}
printar(temp,5);




}