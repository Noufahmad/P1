#include <iostream>
using namespace std;

int main(){

    int a;
    int *aptr;

    a=9;
    aptr=&a;

cout << "The address of a is " << &a<< "\nThe value of aPtr is " << aptr;
cout << "\n\nThe value of a is " << a<< "\nThe value of *aPtr is " << *aptr;
cout << "\n\nShowing that * and & are inverses of "<< "each other.\n&*aPtr = " << &*aptr<< "\n*&aPtr = " << *&aptr << endl;

return 0;

}