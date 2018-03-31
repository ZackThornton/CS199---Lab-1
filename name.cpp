/******************************************
* Author: Zachary Thornton
*  Date: 1/9/18
*  Description: Name Class Implementation File.
*******************************************/

#include "name.hpp"

/*****************************************
 * Set FirstName Fucntion based on user variable
 ****************************************/
void Name::setFirstName(string firstName)
{
	this->firstName = firstName;
}

/*****************************************
* Set LastName Fucntion based on user variable
****************************************/
void Name::setLastName(string lastName)
{
	this->lastName = lastName;
}

/*****************************************
* Get FirstName Fucntion returning FirstName
****************************************/
string Name::getFirst()
{
	return firstName;
}

/*****************************************
* Get LastName Fucntion returning Lastname
****************************************/
string Name::getLast()
{
	return lastName;
}

/*********************
*  Default Constructor
**********************/
Name::Name()
{
}

/****************
*  Deconstructor
****************/
Name::~Name()
{
}
