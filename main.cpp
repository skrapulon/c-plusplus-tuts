// operating with variables

#include <iostream> // use iostream.h header file, contains basic functions and variables
using namespace std; // tnx to this we dont have to type std::cout (just cout)

int main () // initialize main function
{
  // declaring variables:
  int a, b; // a and b are of int value 4bytes of memory, ranges from (-2147483648 to 2147483647 )
  int result; // result = int value

  // process:
  a = 5; // straighforward declaring a=5
  b = 2; // straighforward declaring b=2
  a = a + 1; // declaring a = 5(previous value)+1
  result = a - b; // 6-2

  // print out the result:
  cout << result; 

  // terminate the program:
  return 0;
}
