/*
  Escape sequences inside of string literals

  \n newline \t tab \" double quote \\ backslash
  
*/

#include <iostream>

using namespace std;

int main() {
  cout << "Hello" << endl;
  cout << "Hello\n";
  cout << "\"Hello\"" << endl;
  cout << "\\n means newline\n\n";
  cout << "12345678901234567891234567890" << endl;
  cout << "1\t2\t3\n\t1\t2\t3" << endl;

  return EXIT_SUCCESS;
}