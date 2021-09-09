#include <iostream>
#include <array>

using namespace std;

int sumArray(array<int, 10> arr);
void sumArray(array<int, 10> arr, int& sum);

int main()
{
	array <int, 10> arr{ 10,10,10,10,10,10,10,10,10,9 };
	int sum = sumArray(arr);
	cout << "The total sum is: " << sum << endl;
	cout << "Using the referenced function:\n";
	int totalSum = 0;
	sumArray(arr, totalSum);
	cout << "with referenced sum: " << totalSum << endl;
	return 0;
}

int sumArray(array<int, 10> arr) 
{
	int sum = 0;
	for (int num : arr) {
		sum += num;
	}
	return sum;
}

void sumArray(array<int, 10> arr, int& sum)
{
	for (int num : arr) {
		sum += num;
	}
}