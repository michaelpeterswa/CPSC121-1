/*
CPSC 121-0X
Paul De Palma
depalma
Example 21 
*/

//using getline to replace an explicit read loop 

#include <iostream>
using namespace std;

const int MAX  = 80;

int main()
{
 char line[MAX];
 
 cout << "Enter a string of not more than " << MAX << " characters" << endl;

 cin.getline(line,MAX);

 cout << line << endl; 
 
 return 0;
}
