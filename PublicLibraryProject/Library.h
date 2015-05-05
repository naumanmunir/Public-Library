//Nauman Munir
//David See
//LIBRARY HEADER file

#include <iostream>
#include <fstream>
#include <vector>
#include "Card.h"
#include "Book.h"
using namespace std;

#ifndef LIBRARY_H
#define LIBRARY_H

class Library
{
private:
	int numCards;
	int numBooks;

	vector<Cards> cardlist;			//STL container vector of cards
	vector<Book> booklist;			//STL container vector of books

	//Composing Book and Card
	Book inbooks[3];
	Card incards;

	//setting
	void setnumCards(int snCards);
	void setnumBooks(int snBooks);

	void showBooks();
	void showCards();

	void checkIn();
	void checkOut();

	void addBook();
	void addCard();

	void saveAll();

public:
	Library();													//default constructor
	Library(ifstream& inbookfile, ifstream& incardfile);		//constructor initializer
	~Library();													//destructor

	void showMenu();											//show manu method
	int doCommand(int command);									//do command method
};
#endif