#include <iostream>
using namespace std;

int main() 
{
int i=9,j;
j=i++ + ++i + ++i;
cout<<j;
return 0;
}