#include <iostream>
using namespace std;

bool checksortedandrotated(int arr[], int n) {
int count =0;
for(int i=0; i<n; i++){
if(arr[i-1],arr[i]){
    count++;
}

}
if(arr[n-1]>arr[0]){
    count++;
}
if(count<=0){
    return true;
}
else{
    return false;

}
}


int main(){

int arr[]={3,4,5,1,2};
checksortedandrotated(arr ,5);
cout<<checksortedandrotated;

}