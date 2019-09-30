#include <iostream>
using namespace std;

bool isint(string a)
{
	for(int i=0;i<a.length();i++)
	{
		switch(a[i])
		{
			case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
				return true;
				break;
			default :
				return false;
				break;
		}
	}
}

int main()
{
	string in1="";
	string in2="";
	cout 	<< "#kilépéshez: | \n"
		<<"Adjon meg 2 SZÁMOT\n";
	while (cin >>in1 >>in2 && in1!="|" && in2!="|" && isint(in1) && isint(in2))
	{
		switch(in1<in2)
		{
			case true:
				cout <<"The smaller value is: " <<in1 <<"\nThe bigger value is: " <<in2 <<"\n";
				break;
			case false:
				if(in1>in2)
					cout <<"The smaller value is: " <<in2 <<"\nThe bigger value is: " <<in1 <<"\n";
				else
					cout <<"The numbers are equal!\n";
				break;
		}


		cout << "\nIsmételje meg kérem.\n";
	}


	return 0;
}
