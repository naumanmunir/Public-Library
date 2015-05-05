//Nauman Munir
//David See
//CARD.CPP

#include <string>
#include "Card.h"
#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

//default constructor
Card::Card()
{
	name = "";
	phonenum = "";
	cardnum = 0;
	booksout = 0;
}
//constructor initializer
Card::Card(string &Name, string &Phonenum, int &Cardnum, int &Booksout)
{
	name = Name;
	phonenum = Phonenum;
	cardnum = Cardnum;
	booksout = Booksout;
}
//destructor
Card::~Card()
{}
//setters
void Card::setname(string Name)
{
	name = Name;
}
void Card::setphonenum(string phone)
{
	stringstream convert;
	convert << phone;

	phonenum = convert.str();
}
void Card::setbooksout(int Booksout)
{
	booksout = Booksout;
}

//getters
string Card::getname()
{
	return name;
}
string Card::getphonenum()
{
	return phonenum;
}
int Card::getcardnum()
{
	return cardnum;
}
int Card::getbooksout()
{
	return booksout;
}
//print 
void Card::printcards()
{
	cout << "Name: " << name << endl;
	cout << "Phone Number: " << phonenum << endl;
	cout << "ID Number: " << cardnum << endl;
	cout << "Books taken out: " << booksout << endl;
}