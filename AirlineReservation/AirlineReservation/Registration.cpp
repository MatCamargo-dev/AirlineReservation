#include "Registration.h"

#include <iostream>
#include <string>

#include "Management.h"
using namespace std;

Management m;

void Registration::flights()
{
	string flight[] = { "Dubai", "Canada", "UK", "USA", "Australia", "Europe" };

	for (int a = 0; a < 6; a++)
	{
		cout << (a + 1) << ".flight to " << flight[a] << endl;
	}

	cout << "\nWelcome to the Airlines!" << endl;
	cout << "Press the number of the country of which you want to book the flight: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		cout << "_____________________Welcome to Dubai Emirates____________________\n" << endl;
		cout << "Your comfort is our priority. Enjoy the journey!" << endl;

		cout << "Following are the flights \n" << endl;

		cout << "1. DUB - 498" << endl;
		cout << "\t08-01-2022 8:00AM 10hrs Rs. 14000" << endl;
		cout << "2. DUB - 658" << endl;
		cout << "\t09-01-2022 4:00AM 12hrs Rs. 10000" << endl;
		cout << "3. DUB - 508" << endl;
		cout << "\t11-01-2022 11:00AM 11hrs Rs. 9000" << endl;

		cout << "\nSelect the flight you want to book: ";
		cin >> choice1;

		if (choice1 == 1)
		{
			charges = 14000;
			cout << "\nYou have successfully booked the flight DUB - 498" << endl;
			cout << "You can go back to menu and take the ticket" << endl;
		}
		else if (choice1 == 2) {
			charges = 10000;
			cout << "\nYou have successfully booked the flight DUB - 658" << endl;
			cout << "You can go back to menu and take the ticket" << endl;
		}
		else if (choice1 == 3) {
			charges = 9000;
			cout << "\nYou have successfully booked the flight DUB - 508" << endl;
			cout << "You can go back to menu and take the ticket" << endl;
		}
		else
		{
			cout << "Invalid input, shifting to the previous menu" << endl;
			flights();
		}

		cout << "Press any key to go back to the main menu: " << endl;
		cin >> back;

		if (back == 1)
		{
			m.main_menu();
		}
		else
		{
			m.main_menu();
		}
		break;
	}
	case 2:
	{
		cout << "_____________________Welcome to Canadian Airlines____________________\n" << endl;
		cout << "Your comfort is our priority. Enjoy the journey!" << endl;

		cout << "Following are the flights \n" << endl;

		cout << "1. CA - 198" << endl;
		cout << "\t09-01-2022 2:00PM 20hrs Rs. 34000" << endl;
		cout << "2. CA - 158" << endl;
		cout << "\t11-01-2022 6:00AM 10hrs Rs. 29000" << endl;
		cout << "3. CA - 208" << endl;
		cout << "\t14-01-2022 12:00AM 21hrs Rs. 40000" << endl;

		cout << "\nSelect the flight you want to book: ";
		cin >> choice1;

		if (choice1 == 1)
		{
			charges = 34000;
			cout << "\nYou have successfully booked the flight CA - 198" << endl;
			cout << "You can go back to menu and take the ticket" << endl;
		}
		else if (choice1 == 2) {
			charges = 29000;
			cout << "\nYou have successfully booked the flight CA - 158" << endl;
			cout << "You can go back to menu and take the ticket" << endl;
		}
		else if (choice1 == 3) {
			charges = 40000;
			cout << "\nYou have successfully booked the flight CA - 208" << endl;
			cout << "You can go back to menu and take the ticket" << endl;
		}
		else
		{
			cout << "Invalid input, shifting to the previous menu" << endl;
			flights();
		}

		cout << "Press any key to go back to the main menu: " << endl;
		cin >> back;

		if (back == 1)
		{
			m.main_menu();
		}
		else
		{
			m.main_menu();
		}
		break;
	}
	case 3:
	{
		cout << "_____________________Welcome to UK Airways____________________\n" << endl;
		cout << "Your comfort is our priority. Enjoy the journey!" << endl;

		cout << "Following are the flights \n" << endl;

		cout << "1. UK - 798" << endl;
		cout << "\t12-01-2022 10:00AM 14hrs Rs. 44000" << endl;

		cout << "\nSelect the flight you want to book: ";
		cin >> choice1;

		if (choice1 == 1)
		{
			charges = 44000;
			cout << "\nYou have successfully booked the flight UK - 798" << endl;
			cout << "You can go back to menu and take the ticket" << endl;
		}
		else
		{
			cout << "Invalid input, shifting to the previous menu" << endl;
			flights();
		}

		cout << "Press any key to go back to the main menu: " << endl;
		cin >> back;

		if (back == 1)
		{
			m.main_menu();
		}
		else
		{
			m.main_menu();
		}
		break;
	}

	case 4:
	{
		cout << "_____________________Welcome to US Airways____________________\n" << endl;
		cout << "Your comfort is our priority. Enjoy the journey!" << endl;

		cout << "Following are the flights \n" << endl;

		cout << "1. USA - 567" << endl;
		cout << "\t10-01-2022 9:00AM 22hrs Rs. 37000" << endl;
		cout << "2. USA - 658" << endl;
		cout << "\t09-01-2022 6:00AM 22hrs Rs. 39000" << endl;
		cout << "3. USA - 508" << endl;
		cout << "\t12-01-2022 11:00AM 21hrs Rs. 42000" << endl;

		cout << "\nSelect the flight you want to book: ";
		cin >> choice1;

		if (choice1 == 1)
		{
			charges = 37000;
			cout << "\nYou have successfully booked the flight USA - 567" << endl;
			cout << "You can go back to menu and take the ticket" << endl;
		}
		else if (choice1 == 2)
		{
			charges = 39000;
			cout << "\nYou have successfully booked the flight USA - 658" << endl;
			cout << "You can go back to menu and take the ticket" << endl;
		}
		else if (choice1 == 3)
		{
			charges = 42000;
			cout << "\nYou have successfully booked the flight USA - 508" << endl;
			cout << "You can go back to menu and take the ticket" << endl;
		}
		else
		{
			cout << "Invalid input, shifting to the previous menu" << endl;
			flights();
		}

		cout << "Press any key to go back to the main menu: " << endl;
		cin >> back;

		if (back == 1)
		{
			m.main_menu();
		}
		else
		{
			m.main_menu();
		}
		break;
	}
	case 5:
	{
		cout << "_____________________Welcome to Australian Airlines____________________\n" << endl;
		cout << "Your comfort is our priority. Enjoy the journey!" << endl;

		cout << "Following are the flights \n" << endl;

		cout << "1. AU - 698" << endl;
		cout << "\t08-01-2022 9:00AM 20hrs Rs. 44000" << endl;
		cout << "2. AU - 158" << endl;
		cout << "\t19-01-2022 4:00AM 22hrs Rs. 34000" << endl;
		cout << "3. AU - 708" << endl;
		cout << "\t17-01-2022 10:00AM 21hrs Rs. 42000" << endl;

		cout << "\nSelect the flight you want to book: ";
		cin >> choice1;

		if (choice1 == 1)
		{
			charges = 44000;
			cout << "\nYou have successfully booked the flight AU - 698" << endl;
			cout << "You can go back to menu and take the ticket" << endl;
		}
		else if (choice1 == 2)
		{
			charges = 34000;
			cout << "\nYou have successfully booked the flight AU - 158" << endl;
			cout << "You can go back to menu and take the ticket" << endl;
		}
		else if (choice1 == 3)
		{
			charges = 42000;
			cout << "\nYou have successfully booked the flight AU - 708" << endl;
			cout << "You can go back to menu and take the ticket" << endl;
		}
		else
		{
			cout << "Invalid input, shifting to the previous menu" << endl;
			flights();
		}

		cout << "Press any key to go back to the main menu: " << endl;
		cin >> back;

		if (back == 1)
		{
			m.main_menu();
		}
		else
		{
			m.main_menu();
		}
		break;
	}
	case 6:
	{
		cout << "_____________________Welcome to European Airlines____________________\n" << endl;
		cout << "Your comfort is our priority. Enjoy the journey!" << endl;

		cout << "Following are the flights \n" << endl;

		cout << "1. EU - 898" << endl;
		cout << "\t02-01-2022 2:00AM 18hrs Rs. 36000" << endl;
		cout << "2. EU - 958" << endl;
		cout << "\t03-01-2022 6:00AM 19hrs Rs. 37000" << endl;
		cout << "3. EU - 608" << endl;
		cout << "\t12-01-2022 10:00AM 20hrs Rs. 31000" << endl;

		cout << "\nSelect the flight you want to book: ";
		cin >> choice1;

		if (choice1 == 1)
		{
			charges = 36000;
			cout << "\nYou have successfully booked the flight EU - 898" << endl;
			cout << "You can go back to menu and take the ticket" << endl;
		}
		else if (choice1 == 2)
		{
			charges = 37000;
			cout << "\nYou have successfully booked the flight EU - 958" << endl;
			cout << "You can go back to menu and take the ticket" << endl;
		}
		else if (choice1 == 3)
		{
			charges = 31000;
			cout << "\nYou have successfully booked the flight EU - 608" << endl;
			cout << "You can go back to menu and take the ticket" << endl;
		}
		else
		{
			cout << "Invalid input, shifting to the previous menu" << endl;
			flights();
		}

		cout << "Press any key to go back to the main menu: " << endl;
		cin >> back;

		if (back == 1)
		{
			m.main_menu();
		}
		else
		{
			m.main_menu();
		}
		break;
	}
	default:
	{
		cout << "Invalid input, Shifting you to the main menu! " << endl;
		m.main_menu();
		break;
	}
	}
}

float Registration::charges;
int Registration::choice;
