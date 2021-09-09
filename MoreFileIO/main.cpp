#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream namesInFile;
	ifstream agesInFile;
	ofstream outfile;
	string name;
	int age; 

	cout << "Opening files..." << endl;
	namesInFile.open("names.txt");
	agesInFile.open("ages.txt");
	outfile.open("output.txt");

	if (!namesInFile || !agesInFile) {
		cout << "Problem opening the input files." << endl;
		return 1;
	}

	while (!namesInFile.eof() && !agesInFile.eof()) {
		getline(namesInFile, name);
		agesInFile >> age;
		outfile << name << " " << age << endl;

	}

	namesInFile.close();
	agesInFile.close();
	outfile.close();
	return 0;
}