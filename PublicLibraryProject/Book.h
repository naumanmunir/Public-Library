//Nauman Munir
//David See
//BOOK.H file

#include <string>
#include <iostream>
using namespace std;

#ifndef BOOK_H
#define BOOK_H

class Book
{
private:
	//private data members
	string title;
	string author;
	string ISBN;
	int status;
	int holderID;

public:
	Book();																			//default constructor
	Book(string &Title, string &Author, string &isbn, int &Status, int &Holder);	//constructor initializer
	Book(const Book &cSource);														//copy constructor
	//operator=(const Book &cSource);													//operator assign=
	~Book();																		//destructor

	//setters
	void setTitle(string Title);
	void setAuthor(string Author);
	void setISBN(string isbn);
	void setStatus(int Status);
	void setholder(int Holder);

	//getters
	string getTitle();
	string getAuthor();
	int getholder();
	int getStatus();
	string getISBN();

	void printbooks(); //print cards
};
#endif