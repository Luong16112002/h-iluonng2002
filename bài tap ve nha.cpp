#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string bookID;
    string bookName;
    string author;
    bool isAvailable;

public:
    Book(string id, string name, string writer, bool available) {
        bookID = id;
        bookName = name;
        author = writer;
        isAvailable = available;
    }

    // Setter methods
    void setBookID(string id) {
        bookID = id;
    }

    void setBookName(string name) {
        bookName = name;
    }

    void setAuthor(string writer) {
        author = writer;
    }

    void setIsAvailable(bool available) {
        isAvailable = available;
    }
    string getBookID() {
        return bookID;
    }

    string getBookName() {
        return bookName;
    }

    string getAuthor() {
        return author;
    }

    bool getIsAvailable() {
        return isAvailable;
    }

    void printInfo() {
        cout << "ma sach " << bookID << endl;
        cout << "Ten sach :" << bookName << endl;
        cout << "Tac Gia : " << author << endl;
        cout << "co san: " << (isAvailable ? "CO SAN" : "Borrowed") << endl;
    }
};

int main() {
	
    Book book1("001", "Lao Hac", "nam cao ", true);
    book1.printInfo();

    return 0;
}

