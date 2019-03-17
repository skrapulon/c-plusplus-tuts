/*

// constants

// literals
a=5;


// integers (1776, 666, -666)
75        //decimal
0113      //octal
0x4b      //hexadecimal

75 //int
75u //unsigned int
751 //long
75u1 //unsigned long
751u // unsigned long

//floating point numbers

3.14159 //3.14159
6.023e23 // 6.02 x 10^23
1.6e-19// 1.6x10^-19
3.0 // 3.0

3.14159L //long double
6.02e23f// float

//other literals

bool foo = true ;
bool bar = false;
int* p = nullptr;

////

*/
/*
#include <iostream>
using namespace std;

const double pi = 3.14159;
const char newline = '\n';

int main ()
{
  double r=5.0;  //radius
  double circle;

  circle = 2 * pi * r;
  cout << circle;
  cout << newline;
}

*/

// Preprocessor definition (#define)


#include <iostream>
using namespace std;

#define PI 3.14159
#define NEWLINE '\n'

int main ()
{
  double r=5.0;
  double circle;

  circle = 2*PI*r;
  cout << circle;
  cout << NEWLINE;
}
