#include <string>
#include <iostream>

using namespace std;

 int main()
{
   string SS;     
   string SS1;
   string SS2;  
    
   SS = " This is string";
   SS1="welcome";
   SS2 = SS;
   
   cout << SS << endl;
   cout << SS2 << endl;
//string length
   cout<<"\nLength of the string is :"<<SS1.length(); 
//string size
   cout<<"\nmemory size of the string is :"<<SS1.size(); 

// To print the sub string

cout<<"\n Sub string : "<<SS.substr(0,3); 
cout<<"\n string find"<<SS.find("T")<<endl; // to find the location of the character
// string concatenation
   cout<<"\n String concatenation  "<<SS+SS1; 
// for input string 
  cout<<"\n enter your full name";

  getline(cin,SS1);
  cout<<" \nYou have entered    "<< SS1;
   
}
