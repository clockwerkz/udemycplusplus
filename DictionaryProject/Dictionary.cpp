#include "Dictionary.h"

void Dictionary::AddDefinition(std::string word, std::string definition) {
	dictionary[word] = definition;
};

std::string Dictionary::GetDefinition(std::string word) const {
	auto it = dictionary.find(word);
	if (it == dictionary.end()) {
		return "NOT FOUND";
	}
	return it->second;
};

void Dictionary::PrintAll() const {
	for (auto it : dictionary) {
		std::cout << it.first << ": " << it.second << std::endl;
	}
};