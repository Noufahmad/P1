
// Initializing an array in a declaration.
#include <iostream>
using std::cout;
using std::endl;
	
#include <iomanip>
using std::setw;
	
int main()
	{
// use initializer list to initialize array n            
int n[ 10 ] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };
  
 cout << "Element" << setw( 13 ) << "Value" << endl;
// output each array element's value
for ( int i = 0; i < 10; i++ )
 cout << setw( 7 ) << i << setw( 13 ) << n[ i ] << endl;

//  Summing the elements of an array

int total=0;
for( int h = 0; h < 10; h++ )
total+=n[h];
 cout<<"thotal is "<<total<<endl;

// constant variable can be used to specify array size
const int arraySize = 10;
int s[ arraySize ]; // array s has 10 elements
for ( int b = 0; b < arraySize; b++ ) // set the values
s[ b] = 2 + 2 * b;                                 

cout << "Element" << setw( 13 ) << "Value" << endl;
// output contents of array s in tabular format
for ( int j = 0; j < arraySize; j++ )   
cout << setw( 7 ) << j << setw( 13 ) << s[ j ] << endl;

 return 0; // indicates successful termination
} // end main
