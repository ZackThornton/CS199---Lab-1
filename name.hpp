/********************************************************************
* Author: Zachary Thornton
*  Date: 1/9/18
*  Description: Name Class Header with Private variable, get and set methods.
*********************************************************************/

#ifndef NAME_HPP
#define NAME_HPP

#include <iostream>
using namespace std;

class Name
{
private:
	string firstName;
	string lastName;

public:
	//Set functions//
	void setFirstName(string);
	void setLastName(string);
	
	//Get Functions//
	string getFirst();
	string getLast();
	
	//Constructor//
	Name();

	//Deconstructor//
	~Name();
};
#endif 

