// conditional operator
#include <iostream>
using namespace std;

int main ()
{
  int a,b,c;

  a=(b=2, b+6);
  
  c= (a>b) ? a:b;

  cout << c << '\n';
}
