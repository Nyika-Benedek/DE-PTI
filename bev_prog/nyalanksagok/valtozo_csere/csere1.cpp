#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout <<"adj meg 2 számot\n";
	cin >>a >>b;

	a = a+b;
	b = a-b;
	a = a-b;
	cout <<a <<" " <<b;
	return 0;
}
