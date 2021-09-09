#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book {
	public:
		Book(std::string author, std::string title, std::string genre, int numPages);
		std::string GetAuthor() const;
		std::string GetTitle() const;
		std::string GetGenre() const;
		int GetNumPages() const;
		void PrintBookDetails() const;
	private:
		std::string author;
		std::string  title;
		std::string genre;
		int numPages;
};

#endif 