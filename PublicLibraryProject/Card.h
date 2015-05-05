//Nauman Munir
//David See
//CARD.H file

#include <string>
#include <iostream>
using namespace std;

#ifndef CARD_H
#define CARD_H

class Card
{
private:
	//private data members
	string name;
	string phonenum;
	int cardnum;
	int booksout;

public:
	Card();
	Card(string &Name, string &Phonenum, int &Cardnum, int &Booksout);
	~Card();

	//setters
	void setname(string Name);
	void setphonenum(string phone);
	void setcardnum(int card);
	void setbooksout(int Booksout);

	//getters
	string getname();
	string getphonenum();
	int getcardnum();
	int getbooksout();

	void printcards(); //print cards
};
#endif