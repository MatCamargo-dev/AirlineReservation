#pragma once
#include "Details.h"
#include "Registration.h"

class Ticket : public Registration, Details 
{
public:
	void bill();
	void display();
};

