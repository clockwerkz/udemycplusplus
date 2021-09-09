#include <iostream>
#include <vector>
#include "Book.h"
#include "BankAccount.h"
#include "Pizza.h"
using namespace std;

int main() {
	/*vector<Book> books{
		Book("George Martin", "Game of Thrones", "Fantasy", 864),
		Book("James Stewart", "Calculus", "Math", 1392),
		Book("Bjarne Stroustrup", "The C++ Programming Language", "Programming", 1376)
	};
	for (const Book &book : books) {
		book.PrintBookDetails();
	};*/

	//vector<BankAccount> bankAccounts{
	//	BankAccount("John Smith"),
	//	BankAccount("Sue Walburn", 0),
	//	BankAccount("Joey Johnson", 500)
	//};

	//for (BankAccount& account : bankAccounts)
	//{
	//	cout << account.GetOwner() << "\n-------------\n";
	//	cout << "Attempting to deposit 100\n";
	//	account.Deposit(100);
	//	cout << account.GetOwner() << "'s balance is: " << account.GetBalance() << endl; 
	//	cout << "Attempting to withdrawal -30\n";
	//	account.WithDrawal(-30); 
	//	cout << account.GetOwner() << "'s balance is: " << account.GetBalance() << endl;
	//	cout << "Attempting to withdrawal 40 from a balance of " << account.GetBalance() << endl;
	//	account.WithDrawal(40); 
	//	cout << "Attempting to withdrawal 550 from a balance of " << account.GetBalance() << endl;
	//	account.WithDrawal(550); //should only work for one account
	//	cout << account.GetOwner() << "'s balance is: " << account.GetBalance() << endl;
	//	cout << "-------------\n\n";
	//}
	/*Pizza pizza{ "The Works", 20, 18 };
	pizza.AddTopping("cheese");
	pizza.PrintToppings();
	pizza.AddTopping("pepperoni");
	pizza.AddTopping("mushroom");
	pizza.AddTopping("onion");
	pizza.PrintToppings();
	Pizza garden{ "Garden Veggie", 22, 18 };
	garden.AddTopping("onion");
	garden.AddTopping("green peppers");
	garden.AddTopping("black olives");
	garden.AddTopping("tomatoes");
	garden.PrintToppings();*/


	return 0;
}
