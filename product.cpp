#include "pch.h"
#include "product.h"
#include "string.h"
#include "iostream"

Product::Product() {}
Product::Product(int count, char * name, char * site, int num, double price)
{
	this->product_ID = count;
	strcpy_s(this->product_name, 20, name);
	strcpy_s(this->product_site, 20, site);
	this->product_num = num;
	this->product_price = price;
	this->product_price_all = this->product_num * this->product_price;
	
}

bool Product::ChangeProduct(int count, char * name, char * site, int num, double price)
{
	if (this->product_ID == count ) {
		this->SetProduct_name(name);
		this->SetProduct_site(site);
		this->SetProduct_num(num);
		this->SetProduct_price(price);
		return true;
	}
	else return false;
}


Product::~Product()
{

}

bool Product::SetProduct_name(char * name)
{
	if (strcpy_s(this->product_name, 20, name))return true;
	else return false;
}

bool Product::SetProduct_site(char * name)
{
	if (strcpy_s(this->product_site, 20, name))return true;
	else return false;
}

bool Product::SetProduct_num(int number)
{
	if (this->product_num = number) { this->SetProduct_price_all(); return true; }
	else return false;
}

bool Product::SetProduct_price(double price)
{
	if (this->product_price = price) { this->SetProduct_price_all(); return true; }
	else return false;
}

bool Product::SetProduct_price_all()
{
	if (this->product_price_all = this->product_num * this->product_price) return true;
	else return false;
}

bool Product::ShowProduct()
{
		std::cout << "" << this->GetProduct_ID() << " " << this->GetProduct_name() << " " << this->GetProduct_site() << " "
			<< this->GetProduct_num() << " " << this->GetProduct_price() << " " << this->GetProduct_price_all() << std::endl;
		return true;
}

int Product::GetProduct_ID()
{
	return this->product_ID;
}

char * Product::GetProduct_name()
{
	return this->product_name;
}

char * Product::GetProduct_site()
{
	return this->product_site;
}

int Product::GetProduct_num()
{
	return this->product_num;
}

double Product::GetProduct_price()
{
	return this->product_price;
}

double Product::GetProduct_price_all()
{
	return this->product_price_all;
}



