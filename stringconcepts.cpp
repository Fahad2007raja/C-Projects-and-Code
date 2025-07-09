#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string fName = "Measum ";
  string lName = "Haider";

  string fullName = fName + lName;

  string fullName2 = fName +" "+ lName;

  string fullName3 = fName.append(lName);
  cout << fullName<<endl;
  cout << fullName2<<endl;
  cout << fullName3<<endl;

// second concept
string x = "10 ";
string y = "20";
string z = x +" + "+ y; 
cout<<z<<endl;

// third concept
string q = "ABCDEFGHIJKLMNOPQRSTUVWXYZ The length of the txt string is";
cout<< q.length()<<endl;
cout<<q.size()<<endl;

// fourth concept
cout<<q[57]<<endl;
cout << q[q.length() - 7]<<endl;

// fifth concept
q[10] = '7';
cout<<q;

// sixth concept
cout<<q.at(57)<<endl;
cout << q.at(q.length() - 7)<<endl;

q.at(11) = '8';
cout<<q;
  return 0;
}