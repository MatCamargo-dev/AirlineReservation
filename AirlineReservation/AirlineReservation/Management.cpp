#include "Management.h"

#include "Details.h"
#include "Registration.h"
#include "Ticket.h"

void Management::main_menu()
{
	int lchoice;
	int schoice;
	int back;

	cout << "\t             XYZ Airlines    \n" << endl;
	cout << "\t_______________Main menu________________" << endl;

	cout << "\t___________________________________________________" << endl;
	cout << "\t|\t\t\t\t\t\t|" << endl;

	cout << "\t|\t Press 1 to add the Customer Details       \t|" << endl;
	cout << "\t|\t Press 2 for Flight Registration	         \t|" << endl;
	cout << "\t|\t Press 3 for Ticket and Charges            \t|" << endl;
	cout << "\t|\t Press 4 to Exit                           \t|" << endl;
	cout << "\t|\t\t\t\t\t\t|" << endl;
	cout << "\t___________________________________________________" << endl;

	cout << "Enter the choice: ";
	cin >> lchoice;

	Details d;
	Registration r;
	Ticket t;

	switch (lchoice)
	{
	case 1:
		{
			cout << "________________Customers________________\n" << endl;
			d.information();
			cout << "Press 1 to go back to Main menu ";
			cin >> back;

			if (back == 1)
			{
				main_menu();
			}
			else
				 main_menu();
			break;
		}
		
	case 2:
		{
			cout << "____________Book a flight using this system____________\n" << endl;
			r.flights();
			break;
		}
	case 3:
		{
			cout << "_________Get YOUR TICKET___________\n" << endl;
			t.bill();

			cout << "Your ticket is printed, you can collect it \n" << endl;
			cout << "Press 1 to display you ticket";
			cin >> back;

			if(back == 1)
			{
				t.display();
				cout << "Press any key to go back to main menu: ";
				cin >> back;
				if(back == 1)
				{
					main_menu();
				}
				else
				{
					main_menu();
				}
			}
			else
			{
				main_menu();
			}
			break;
		}
	case 4:
		{
			cout << "\n\n\t__________Thank-you__________" << endl;
			break;
		}
		default:
		{
			cout << "Invalid input, Please try again!\n" << endl;
			main_menu();
			break;
		}

	}


}
