//Nauman Munir
//David See
//BOOK.CPP file

#include <iostream>
#include "Book.h"
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

//Default constructor
Book::Book()
{
	title = "";
	author = "";
	ISBN = "";
	status = 0;
	holderID = 0;
}
//Constructor initializer
Book::Book(string &Title, string &Author, string &isbn, int &Status, int &Holder)
{
	title = Title;
	author = Author;
	ISBN = isbn;
	status = Status;
	holderID = Holder;
}
//Copy constructor
Book::Book(const Book &cSource)
{
	title = cSource.title;
	author = cSource.author;
	ISBN = cSource.ISBN;
	status = cSource.status;
	holderID = cSource.holderID;
}
//operator assignment =
/*Book& Book::operator=(const Book&cSource)
{
	//check for self-assignment by comparing the address of the 
	//implicit object and parameter
	if (this == &cSource)
	{
		return *this;
	}
	//do the copy
	title = cSource.title;
	author = cSource.author;
	ISBN = cSource.ISBN;
	status = cSource.status;
	holderID = cSource.holderID;

	//return the existing object
	return *this;
}*/
//destructor
Book::~Book(){}

//setters
void Book::setTitle(string Title)
{
	title = Title;
}

void Book::setAuthor(string Author)
{
	author = Author;
}
void Book::setISBN(string isbn)
{
	ISBN = isbn;
}

void Book::setStatus(int Status)
{
	status = Status;
}
void Book::setholder(int Holder)
{
	holderID = Holder;
}
//getters
string Book::getTitle()
{
	return title;
}
string Book::getAuthor()
{
	return author;
}
int Book::getholder()
{
	return holderID;
}

int Book::getStatus()
{
	return status;
}
string Book::getISBN()
{
	return ISBN;
}
//print
void Book::printbooks()
{
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "ISBN-0: " << ISBN << endl;
	cout << "Status: " << status << endl;
	cout << "Holders ID number: " << holderID << endl << endl;
}

