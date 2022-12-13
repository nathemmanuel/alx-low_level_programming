#include "100-main.h"
#include <fstream>
#include <iomanip>

int main(void)
{
	ofstream File;
	File.open("Receipt.txt");
	File << setw(40) << right << "Yem Yem Ltd\n";
	File << setw(50) << right << "University of Lagos, Akoka\n";
	File << setw(20) << left << "Customer" << setw(20) << "Ronke Ahmed\n";
	File << setw (20) << left << "Phone Number" << setw(20) << "09071734933\n";
	File << "\n\n\nYour Order\n\n";
	File << setw(20) << "Product Name" << setw(15) << left << "UnitPrice";
	File << setw(20) << "Quantity Ordered\n";
	File << setw(20) << left << "Chocolate" << setw(20) << left << "50"
		<< setw(20) << "5\n";
	File << setw(40) << " " << setw(20) << left << "*******\n";
	File << setw(40) << right << "Total Price"
		<< setw(20) << left << "250\n";
	File << setw(40) << " " << setw(20) << left << "*******\n";
	File << setw(41) << "Thanks for your patronage\n";

	for (int i = 0;  i < 65; i++)
		File << "*";
	File << "\n";
	File.close();
	return(0);
}
