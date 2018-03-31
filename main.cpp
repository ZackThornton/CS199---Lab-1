/********************************************************
 * Author: Zachary Thornton
 *  Date: 1/9/18
 *  Description: 
 */
#include <iostream>
#include <string>
#include "name.hpp"
using namespace std;

int main()
{
	Name person;
	person.setFirstName("Zack");
	person.setLastName("Thornton");

	cout << person.getFirst() << endl << person.getLast() << endl;


	return 0;
}