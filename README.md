# Public-Library
CSC 330 - Term project

Statement of Completeness:

	Three header files which include Book.h, Card.h, and Library.h and their respective .cpp files with the definitions.

In Book.cpp:

	Book is able to able to initialize itself, destroy itself (destructor), and print itself. Book identifies itself by returning its book number, gets the status, gets the status, sets the status, gets and sets who has the book.

In Card.cpp:

	A Card object is able to initialize itself, destroy itself, copy itself, be assigned to, return the book number, and set the book number.

In Library.cpp:

	Library “has” (composition) Book and Card in itself. Library object reads text files passed from the main. The constructor initialize reads all the elements stored in the 2 text files (books and cards). The library sets the number of books and cards after reading them.

	The library has several methods which are being able to show books and cards, add new books and cards, being able to check out books as well as check them back in. the library also has a menu function that displays and instructs the user what to press and calls the corresponding functions in order to do the task required.

	Lastly library has a save all function that saves everything to two text files (books.txt and cards. Txt), if anything was added/removed; it updates the files and then closes the program.

Errors: only one error is known which is an Assertion error. When incrementing the number of books taken out by a person, it only increments only one time.

	A possible fix would be a person is only is only able to check out only one book at a time.


**Problem Analysis**

Phase 1:

Card() – default constructor
Card(string Name, int phonenum, int cardunum, int booksout)- constructor
~Card() – deconstructor
void setName(sting Name) – set name
void setphonenum(string phone) – set phone number
void setcardnum(int card) – set card number
void setbookout(int Booksout) – set number of book he/she taken out
string getname() – get name
string getphonenum() – get phone number
int getcardnum() – get card number
int getbooksout() – get number of books he/she taken out
Class Card has variables name, phonenum, cardnum, and booksout
Phase 2:
Book() – default constructor
Book(string & Title, string &Author, string &isbn, int &Status, int &Holder) – constructor
Book(const Book &cScouce) – copy constructor
Book & operator = (const Book &cScource) – operator = constructor
~Book() - deconstructor
Void setTitle(string Title) – set title of book
Void setAuthor(string Author) – set author of book
Void setISBN(string isbn) – set isbn number of book








void setStatus(int status) – set status of book
void setholder(int holder) – set the holder id number of the person holding the book
string getTitle() – get title of book
string getAuthor() – get author of book
int getStatus() – get status of book
int getholder() – get holder id number of the person holding the book
string getISBN() – get isbn number of book
void printbooks() – print the books
Class book has variables title, author, ISBN, status, and holderID

Phase 3:
Library() – default constructor
Library(ifstream& inbookfile, ifstream& incardfile) – constructor
~Library() – deconstructor
void showMenu() – print menu option
int doCommand – print command option
void setnumCards(int sncards) – set number of cards inside library
void setnumBooks(int snbooks) – set number of books inside library
void showBooks() – print out books
void showCards() – print out cards
void checkin() – check in books
void checkout() – check out books
void addBook() – add books
void addCard() – add cards
void saveall() – writes everything to the text files books.txt and cards.txt, update them and then exit program

Class library has variables numCards and numBooks. Class library has array: Book inbook[], Cards incards[]. Also has vectors: vector<Card> cardlist and vector <Book> booklist.
