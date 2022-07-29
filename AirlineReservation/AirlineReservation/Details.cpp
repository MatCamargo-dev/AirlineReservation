#include "Details.h"

#include <iostream>
using namespace std;

void Details::information()
{
	cout << "\nEnter the customer ID:";
	cin >> cId;
	cout << "\nEnter the name: ";
	cin >> name;
	cout << "\nEnter the age: ";
	cin >> age;
	cout << "\n Enter the Address: ";
	cin >> add;
	cout << "\n Enter the gender: ";
	cin >> gender;
	cout << "Your details are saved with us\n" << endl;

}

int Details::cId;
string Details::name;
string Details::gender;

