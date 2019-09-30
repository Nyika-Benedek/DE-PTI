#include <iostream>
using namespace std;

int main()
{
	int k=1;
	int db=0;

	while(k!=0)
	{
		k <<=1;
		++db;
	}
	cout <<db;
}
