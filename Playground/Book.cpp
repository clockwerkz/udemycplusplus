#include "Book.h"
#include <iostream>

Book::Book(std::string author, std::string title, std::string genre, int numPages) : author(author), title(title), genre(genre), numPages(numPages) {}

std::string Book::GetAuthor() const {
	return author;
};
std::string Book::GetTitle() const {
	return title;
};
std::string Book::GetGenre() const {
	return genre;
};
int Book::GetNumPages() const {
	return numPages;
};

void Book::PrintBookDetails() const{
	std::cout << "'" << title << "'" << ", written by " << author << " Genre: " << genre << " Number of pages: " << numPages << std::endl;
}