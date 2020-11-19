// string::substr
#include <iostream>
#include <string>

using namespace std;

string returnInitials(string &name, string &surname, int age);

int main ()
{
  string name="Rafael ", lastname= "Santos", initials_result;
  int age = 29;

  initials_result = returnInitials(name, lastname, age);

  cout << initials_result <<endl;
  
  return 0;
}

// Function to return the two initial letters of name and lastname plus age in the same string.

string returnInitials(string &name, string &surname, int age){ return  name.substr (0,2) + surname.substr(0, 2) + std::to_string(age); }