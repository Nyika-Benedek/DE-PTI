#include <iostream>

int main()
{
	std::cout << "Enter the name of the person you wan to write to:\n";
	std::string name="";
	std::cin >> name;
	std::cout << "Tell his/her age:\n";
	int age=1;
	std::cin >> age;
	std::cout << "Enter your frend's name whom you looking for.\n";
	std::string friend_name="";
	std::cin >> friend_name;
	std::cout <<"Pleas define your friend's gender(m - Male f - Female): ";
	char friend_sex=0;
	std::cin >> friend_sex;


	std::cout << "\nDear "<<name<<", \n";
	std::cout << "How are you? \nIm fine, i miss you.\n";
	std::cout << "Have you seen "<<friend_name<<" lately?\n";
	if(friend_sex=='f')
		std::cout << "If you see "<<friend_name<<" please ask her to call me.\n";
	else
		std::cout << "If you see "<<friend_name<<" please ask him to call me.\n";

	std::cout << "I hear you just had a birthday and your age is "<<age<<" year old.\n";

	if(age<12)
		std::cout << "Next year you will be "<<age+1<<".\n";
	if(age==17)
		std::cout << "Next year you will be abel to wote.\n";
	if(age>70)
		std::cout << "I hope you enjoying retirement.\n";
}
