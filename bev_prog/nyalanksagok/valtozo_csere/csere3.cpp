#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout <<"adj meg 2 számot\n";
	cin >>a >>b;

	a= a^b;
	b= b^a;
	a= a^b;
	cout <<"a=" <<a <<"\n"
	     <<"b=" <<b;
	return 0;
}
