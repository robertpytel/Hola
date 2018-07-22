#include <iostream.h>

//This is the second file being uploaded to github
//I still need to look up a case study for .c files

int main()
{
  int fourteen = 14;
  fourteen = add5(fourteen);
  cout << "fourteen is: " << fourteen << endl;
  return 0;
}

int add5(int &addTo)
{
  addTo+=5;
  return addTo;
}