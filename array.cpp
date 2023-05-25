
	// Initializing an array.
		#include <iostream>
		using namespace std;
		#include <iomanip>
		using std::setw;
		
		int main()
		{ 
			int sizearr;
			cout<<"enter the number of elements"<<endl;
			cin>>sizearr;
			  int n[ sizearr ];
		   //int n[ sizearr ]={1,5,6,9,8,7,8,9,2,5}; // n is an array of 10 integers
		  // cout<<"this is the first elemnt:"<<n[9]<<endl;

		   // initialize elements of array n to 0     
		    for ( int i = 0; i < sizearr; i++ )      
		  // for ( int i = 0; i < 10; i++ ) 
		     // n[i]=0;
			  //n[i]=i&2;                
	          cin>> n[ i ] ; // set element at location i to 0
		
		  int total=0;
            for ( int y = 0;y < sizearr; y++ )  
			total +=n[ y ];
			cout<<" the total is :"<<total;
			
	         cout << "Element" << setw( 13 ) << "Value" << endl;
    		   // output each array element's value    
			for ( int j = 0; j < sizearr; j++ )                  
		  // for ( int j = 0; j < 10; j++ )                            
		      cout << setw( 7 ) << j << setw( 13 ) << n[ j ] << endl;
		 
		   return 0; // indicates successful termination
		} // end main
