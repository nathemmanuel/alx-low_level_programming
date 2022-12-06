#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

struct Product
{
	char ProductName[30];
	float Unitprice;
	int Quantity;
	float TotalPrice;
};
struct Shop
{
	char ShopName[40];
	char Address[100];
};
struct Customer
{
	char CustomerName[50];
	char* Phonenumber;
};
struct Person
{
	Product Item;
	Shop Stall;
	Customer Being;
};

void FillShoppingInfo(Person* Eni);
void WriteReceipt(Person Fellow);
#endif /*MAIN_H*/
