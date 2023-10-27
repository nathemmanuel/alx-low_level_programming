#include "100-main.h"
#include <iomanip>
#include <fstream>
/**
* FillShoppingInfo - Asks the user to enter all information
* for a Person instance
* @Eni: This is a pointer to an instance of the Person struct; pointers
* keep us from creating duplicate variables
*
* Return: Void
*/
void FillShoppingInfo(Person* Eni)
{
	cout << "Hi!\nName:\n\t";
	cin.get((Eni->Being.CustomerName), 50);
	cout << "Phone Number:\n";
	// getline(cin, (Eni->Being.CustomerName));
	cout << "Shop Name:\n\t";
	cin.get((Eni->Stall.ShopName), 40);
	cout << "Address of Shop:\n\t";
	cin.get((Eni->Stall.Address), 100);
	cout << "Product:\n\t";
	cin.get((Eni->Item.ProductName), 40);
	cout << "Quantity:\n\t";
	cin >> Eni->Item.Quantity;
	cout << "Unit Pice:\n\t";
	cin >> Eni->Item.Unitprice;
	Eni->Item.TotalPrice = Eni->Item.Unitprice * (float) Eni->Item.Quantity;
}

/**
* WriteReceipt - Writes the receipt for the customer into a file
* @Person: The person's information that'll be displayed
*
* Return: Void
*/

void WriteReceipt(Person Fellow)
{
	ofstream Write;
	Write.open("Receipt.txt");
	for (int i = 0; i <= 40; i++)
		Write << "*";
	Write << setw(20) << right << Eni->Stall.ShopName << "\n";
	Write << setw(20) << left << Eni->Stall.Address << "\n";
	Write << setw(20) << "Customer\t\t" << setw(20) << Eni->Being.CustomerName;
	Write << setw(20) << left << "Phone Number\t";
	Write << setw(20) << right << Eni->Being.Phonenumber << "\n";


}
