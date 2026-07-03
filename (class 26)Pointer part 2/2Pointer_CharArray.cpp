#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    char ch[6] = "abcde";

    cout<<"printing only ch: " << ch << endl;
    cout<<"printing only arr: " << arr << endl;

    char *C = &ch[0];
    cout<<"Pointer to char array: printing *C  " << C << endl;

    int *ptr = &arr[0];
    cout<<"Pointer to int array: printing *ptr  " << ptr << endl;

    char temp='z';
    char *c1=&temp;
    cout<<"Pointer to char: printing *c1  " << c1 << endl;
    cout<<"Iska result z ke bad abcde isliye aayega kyuki c1 ke baad memory me ch ka address hai. and pointer jb tk print krta rahega tb tk usse memory me ch ka address milta rahega. and jb tk null character nahi milta tb tk print krta rahega.";
    return 0;
}