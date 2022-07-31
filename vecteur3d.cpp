#include <iostream>
using namespace std;
 
int sum(int *a, int *b)
{
int c;
c = *a + *b;
return c;
}
 
int main()
{
int x = 100;
int y = 200;
int add;
add = sum(&x,&y);
cout << x <<" + " << y << " = " << add;
return 0;
}