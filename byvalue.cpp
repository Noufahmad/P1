#include <iostream>
using namespace std;

void swap(int x, int y); // function declaration

int main ()
 {
// local variable declaration:
   int a = 100;
   int b = 200;
   
    cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl;
   swap(100, 200);
   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;
 }

 // function definition to swap the values.
void swap(int x, int y)
 {
   int temp;
   temp = x; /* save the value at address x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */
   cout<<x<<endl;
   cout<<y<<endl;
}
