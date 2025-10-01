#include <iostream>

class Book {
private:
	std::string title;
	std::string author;
	int pages;

public:
	Book() {
		title = "Coraline";
		author = "Neil Gaimen";
		pages = 203;
	}
	Book(std::string title, std::string author, int pages) {
		this->title = title;
		this->author = author;
		this->pages = pages;
	}

	void displayData() {
		std::cout << this->title << ", " << this->author << ", pages : " << this->pages << std::endl;
	}
};
int main() {
	Book book1;
	book1.displayData();

	Book book2("The Hobbit", "Tolkein", 500);
	book2.displayData();
}
