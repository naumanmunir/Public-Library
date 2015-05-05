# Public-Library
CSC 330 - Term project

**Statement of Completeness:**

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


**Test Plan:**
-REASON	
Does the method saveall() in Library, write back to .txt files, when prompted?
-INPUT
outbooks  << inbooks.getTitle()  << endl;
outbooks  << inbooks.getAuthor()  << endl;
outbooks  << inbooks.getISBN()  << endl;
outbooks  << inbooks.getStatus()  << endl;
outbooks  << inbooks.getholder()  << endl;
-OUTPUT
--------
-OUTCOME
FAIL

-REASON	
How to exit the program on command?
-INPUT
cout  << “saving all and exiting.” 
<< endl;
Exit(0);
-OUTPUT
Saves(writes to .txt files) and exits the program
-OUTCOME
PASS

-REASON	
Not being to read from .txt files correctly
-INPUT
Use cin instead of getline
-OUTPUT
Uses no space
-OUTCOME
PASS

-REASON	
How to push elements read from .txt files into vectors
-INPUT
Cardlist.push_back(Card(name, phonenum,cardnum, booksout));
-OUTPUT
Stores everything into vectors
-OUTCOME
PASS










