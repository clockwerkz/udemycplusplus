
#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <map>
#include <string>
#include <iostream>

class Dictionary {
	public:
		void AddDefinition(std::string word, std::string definition);
		std::string GetDefinition(std::string word) const;
		void PrintAll() const;
	private:
		std::map<std::string, std::string> dictionary;
};

#endif