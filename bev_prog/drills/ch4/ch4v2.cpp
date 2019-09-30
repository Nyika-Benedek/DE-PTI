#include <iostream>
#include "std_lib_facilities.h"
using namespace std;


int main()
{
	double a;
	string am;
	string bm;
	double b;
	double min=999999999999999999;
	double max=-999999999999999999;
	double sum=0;
	vector <double> v;
	cout <<"Addjon meg 2 számot\n";
	while (cin >>a >>am >>b >>bm && (am=="m" || am=="cm" || am=="ft" || am=="in") && (am=="m" || am=="cm" || am=="ft" || am=="in"))
	{
	//egyégesítem a mértékegységeket(m)
	//a-ra
	if(am=="cm")
		a *=0.01;
	else if(am=="in")
		a *=0.0254;
	else if(am=="ft")
		a *=0.3048;
	//b-re
	if(bm=="cm")
		b *=0.01;
	else if(bm=="in")
		b *=0.0254;
	else if(bm=="ft")
		b *=0.3048;

	//sum
	sum +=a+b;

	//vector
	v.push_back(a);
	v.push_back(b);

	//kiiratás
		switch(a<b)
		{
			case true:	//Ha a<b
				cout <<"The smaller value is: " <<a <<"\n"
				     <<"The bigger value is: " <<b <<"\n";
				break;
			case false:
				if(a!=b)	//Ha b<a
					cout <<"The smaller value is: " <<b <<"\n"
					     <<"The bigger value is: " <<a <<"\n";
				else		//Ha a=b
					cout <<"The numbers are equal!\n";
				break;
		}
		if((a-b>0 && a-b<1.0/100) || (b-a>0 && b-a<1.0/100))	//Ha a és b különbsége(ha nem lehet negatív és 0) kissebb mint 1/100
			cout <<"The numbers are almost equal!\n";

		if(a<b)						//Itt azért van 2szer a<b és b<a -ra mert mivan ha mind a 2 érték nagyobb/ kissebb mint a min/max ezért ne írja ki 2szer "the ... so far"
			if(min>a)
			{
				min=a;
				cout <<"the smallest so far:" <<min <<"m\n";
			}
			if(max<b)
			{
				max=b;
				cout <<"The biggest so far:" <<max <<"m\n";
			}
		else if(b<a)
			if(min>b)
			{
				min=b;
				cout <<"The smallest so far:" <<min <<"m\n";
			}
			if(max<a)
			{
				max=a;
				cout <<"The biggest so far:" <<max <<"m\n";
			}


		cout <<"\nIsmételje meg\n";
	}
	//összegzés
	cout <<"The largest number so far: " <<max <<"m\n"
	     <<"The smallest number so far: " <<min <<"m\n"
	     <<"The sum of all entered values: " <<sum <<"m\n";

	//vector kiiratása
	sort(v);
	for(int i : v)	//i for-each v elem
		cout <<i <<" \n";

	//std::cin.get();	//nyitvatartja az ablakot mielőtt még lefutna a program és bezáródna
	keep_window_open();
	return 0;
}
