#include "100-main.h"
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
	/*
	* should ideally write this into a file but
	* I'll write it to stdout for now
	*/ 
	cout << Fellow.Stall.ShopName;
	cout << Fellow.Stall.Address;
	cout << "Customer\t" << Fellow.Being.CustomerName;
	cout << "Phone Numner\t" << Fellow.Being.Phonenumber;
	cout << "\nYour order\n\n";
	cout << "Product Name\t" << "Unit Price\t" << "Quantity Ordered\n";
	cout << Fellow.Item.ProductName << "\t"
		<< Fellow.Item.Unitprice
		<< "\t" << Fellow.Item.Quantity;
	cout << "\t\t\t\tTotal Price\t" << Fellow.Item.TotalPrice;
	cout << "Thank you for your patronage";
}

/**
* main - tests code
*
* Return: 0 (success)
*/
int main(void)
{
	Person Human;
	FillShoppingInfo(&Human);
	WriteReceipt(Human);

	return(0);
}
