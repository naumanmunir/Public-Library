//Nauman Munir
//David See

#include "Library.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include "Card.h"
#include "Book.h"
using namespace std;

/*Reading out books and cards to the same  .txt file*/
ofstream outbooks("books.txt", ios_base::ate | ios_base::out | ios::app);
ofstream outcards("books.txt", ios_base::ate | ios_base::out | ios::app);

Library::Library()
{
	numCards = 0;
	numBooks = 0;
}

Library::Library(ifstream& inbookfile, ifstream& incardfile)
{
	//Temp variables
	string title, author, name, isbn;
	int status, holderID, cardnum, booksout;
	string phonenum;

	numBooks = 3;			//hard coding for testing
	numCards = 3;			//hard coding for testing

	inbooks[numBooks];

	for (int i = 0; i < numBooks; i++)
	{
		inbookfile >> title >> author >> isbn >> status >> holderID;

		inbooks[i].operator=(Book(title, author, isbn, status, holderID));

		inbooks[i].setTitle(title);
		inbooks[i].setAuthor(author);
		inbooks[i].setISBN(isbn);
		inbooks[i].setStatus(status);
		inbooks[i].setholder(holderID);

		inbooks[i].printbooks();
		cout << "TESTING" << endl;

		booklist.push_back(Book(title, author, isbn, status, holderID));

	}

	for (int i = 0; i < 3; i++)
	{
		incardfile >> name >> phonenum >> cardnum >> booksout;

		incards.setname(name);
		incards.setphonenum(phonenum);
		incards.setcardnum(cardnum);
		incards.setbooksout(booksout);

		//TEST: incards.printcards();

		cardlist.push_back(Card(name, phonenum, cardnum, booksout));

	}
}
Library::~Library(){}

void Library::setnumCards(int sncards)
{
	numCards = sncards;
}

void Library::setnumBooks(int snbooks)
{
	numBooks = snbooks;
}

//Checks in books by books ISBN number and holders ID card number
void Library::checkIn()
{
	string isbnum; 
	int holderID;
	int booksout = 0;

	cout << "(Check-in)" << endl;
	cout << "Enter the ISBN of the book: " << endl;
	cin >> isbnum;
	cout << "Enter holders ID card number: " << endl;
	cin >> holderID;

	for (int i = 0; i <= booklist.size(); i++)
	{
		if (booklist[i].getISBN() == isbnum && cardlist[i].getcardnum() == holderID)
		{
			//setting info below
			booklist[i].setStatus(0);
			booklist[i].setholder(0);

			booksout -= 1;
			cardlist[i].setbooksout(booksout);

			cout << "Book succesfully checked-in" << endl;
		}

	}
}

//search by ISBN and check out by ID card number
void Library::checkOut()
{
	//declared variables
	string isbnum;
	int holderID;
	int booksout = 0;

	//asking for ISBN and ID number
	cout << "(Check-out)" << endl;
	cout << "Enter the ISBN of the book: " << endl;
	cin >> isbnum;
	cout << "Enter holders ID card number: " << endl;
	cin >> holderID;

	for (int i = 0; i <= booklist.size(); i++)
	{
		//if the ISBN input is the same as the books, set the books status to '1' (checking-out)
		if (booklist[i].getISBN() == isbnum && cardlist[i].getcardnum() == holderID)
		{
			//setting info below
			inbooks[i].setStatus(1);
			inbooks[i].setholder(holderID);

			//change book status to being check-out and set the persons ID whose check it out
			booklist[i].setStatus(1);
			booklist[i].setholder(holderID);

			booksout += 1;
			cardlist[i].setbooksout(booksout);

			cout << "Book check-out succesfully" << endl;

		}
	}
}

//adds books to the collection by asking for title, author and ISBN

void Library::addBook()
{
	//Temp variables
	string title, author, isbn;
	int status = 0;
	int holderid = 0;

	//ingore the empty space when entered is pressed, using it for spaces between words
	cin.ignore(numeric_limits <streamsize>::max(), '\n' );

	cout << "---ADD A BOOK:---" << endl;
	getline(cin, title);
	cout << "Enter authors name: ";
	getline(cin, author);
	cout << "Enter book's ISBN number: ";
	getline(cin, isbn);

	for (int i = 0; i < 1; i++)
	{
		inbooks[i].setTitle(title);
		inbooks[i].setAuthor(author);
		inbooks[i].setISBN(isbn);
		inbooks[i].setStatus(status);
		inbooks[i].setholder(holderid);

		//pushes everything into the vector as well as the book constructor
		booklist.push_back(Book(title, author, isbn, status, holderid));
	}

}

//adds new cards by asking for input of name, phone number and creating a new card number 
void Library::addCard()
{
	//temp variables
	string name;
	int cardnum;
	int booksout = 0;
	string phonenum;

	cin.ignore(numeric_limits <streamsize> ::max(), '\n');

	cout << "---ADD A CARD:---" << endl;
	cout << "Enter the name of the person: ";
	getline(cin, name);
	cout << "Enter persons phone number: ";
	getline(cin, phonenum);
	cout << "create a card number: ";
	cin >> cardnum;

	incards.setname(name);
	incards.setphonenum(phonenum);
	incards.setcardnum(cardnum);
	incards.setbooksout(booksout);

	cardlist.push_back(Card(name, phonenum, cardnum, booksout));
}

//shows current books in the vector of books
void Library::showBooks()
{
	for (int i = 0; i <= booklist.size(); i++)
	{
		booklist[i].printbooks();
	}
}

//shows all cards whenever menu button is pressed
void Library::showCards()
{
	for (int i = 0; i <= cardlist.size(); i++)
	{
		cardlist[i].printcards();
	}
}

//saves all, writes everything to the correct .txt files
void Library::saveAll()
{
	ofstream outcardss("cards.txt", ios::ate | ios::out | ios::app);

	for (int i = 0; i <= booklist.size(); i++)
	{
		outbooks << booklist[i].getTitle() << endl;
		outbooks << booklist[i].getAuthor() << endl;
		outbooks << booklist[i].getISBN() << endl;
		outbooks << booklist[i].getStatus() << endl;
		outbooks << booklist[i].getholder() << endl;
	}

	for (int i = 0; i <= cardlist.size(); i++)
	{
		outcardss << cardlist[i].getname() << endl;
		outcardss << cardlist[i].getphonenum() << endl;
		outcardss << cardlist[i].getcardnum() << endl;
		outcardss << cardlist[i].getbooksout() << endl;
		
	}

	cout << "saving all and exiting." << endl;
	exit(0);
}
void Library::showMenu()
{
	cout << endl;
	cout << "------Press (1) to view library cards------------" << endl;
	cout << "------Press (2) to view current books------------" << endl;
	cout << "------Press (3) to check-in a book---------------" << endl;
	cout << "------Press (4) to check-out a book--------------" << endl;
	cout << "------Press (5) to create a new library card-----" << endl;
	cout << "------Press (6) to add a book--------------------" << endl;
	cout << "------Press (0) to exit the program--------------" << endl << endl;
}

int Library::doCommand(int command)
{
	switch (command)
	{
	case 1:
		showCards();
		break;
	case 2:
		showBooks();
		break;
	case 3:
		checkIn();
		break;
	case 4:
		checkOut();
		break;
	case 5:
		addCard();
		break;
	case 6:
		addBook();
		break;
	case 0:
		saveAll();
		break;

	}

	return 0;
}