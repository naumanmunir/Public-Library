//Nauman Munir
//David See
//Main
//CSC 330 Project

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <sstream>

#include "Library.h"
#include "Book.h"
#include "Card.h"
#include <string.h>
using namespace std;

int main()
{
	Library lib;
	int command;

	/*Reading in books and cards from a .txt file*/
	ifstream inbooks("books.txt", ios_base::in | ios_base::out | ios::app);
	ifstream incards("books.txt", ios_base::in | ios_base::out | ios::app);

	Library lib2(inbooks, incards);

	cout << "********** Welcome to Darcey Public Library **********" << endl;
	cout << "--------What would you like to do?---------" << endl;

	bool do_exit = false;
	do
	{
		lib.showMenu();
		cin >> command;
		do_exit = lib.doCommand(command);

	} while (do_exit == false);

	inbooks.close();
	incards.close();
	return 0;
}