#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void printToStream(ostream& output, int howMany);

int main() {
	
	ofstream outfile;
	int highValue = 0;
	cout << "Number of loops to compute: ";
	cin >> highValue;
	cout << "Writing to file:\n";
	outfile.open("output.txt");
	printToStream(outfile, highValue);
	printToStream(cout, highValue);
	outfile.close();
	cout << "Done!\n";
	return 0;
}

void printToStream(ostream &output, int highValue)
{
	output << fixed << showpoint;
	for (int i = 1; i <= highValue; i++) {
		output << setw(12) << setprecision(2) << (i * 5.7575)
			<< setw(12) << setprecision(3) << (i * 3.1415) << endl;
	}
}
