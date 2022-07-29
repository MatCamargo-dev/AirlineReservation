#include "Ticket.h"
#include <fstream>
#include <iostream>

void Ticket::bill()
{
	string destination = "";
	ofstream outf("records.txt");
	{
		outf << "________________XYZ Airlines________________" << endl;
		outf << "___________________Ticket___________________" << endl;
		outf << "____________________________________________" << endl;

		outf << "Customer ID: " << Details::cId << endl;
		outf << "Customer Name: " << Details::name << endl;
		outf << "Customer Gender: " << Details::gender << endl;
		outf << "\tDescription" << endl << endl;

		if(Registration::choice==1)
		{
			destination = "Dubai";
		}else if (Registration::choice == 2)
		{
			destination = "Canada";
		}
		else if (Registration::choice == 3)
		{
			destination = "Uk";
		}
		else if (Registration::choice == 4)
		{
			destination = "USA";
		}
		else if (Registration::choice == 5)
		{
			destination = "Australia";
		}
		else if (Registration::choice == 6)
		{
			destination = "Europe";
		}
		outf << "Destination\t\t" << destination << endl;
		outf << "Flight cost: " << Registration::charges << endl;
	}
	outf.close();
}

void Ticket::display()
{
	ifstream ifs("records.txt");
	{
		if (!ifs)
		{
			cout << "File error!" << endl;
		}
		while (!ifs.eof())
		{
			ifs.getline(arr, 100);
			cout << arr << endl;
		}
		ifs.close();
	}
}

