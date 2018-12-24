#pragma once
#include "product.h"
class warelist :
	protected Product
{
	warelist* pre;
	Product* product;
	warelist* last;
public:
	warelist(int count, char * name, char * site, int num, double price);
	virtual ~warelist();
	void GetProduct();//打印Product
	bool SetProduct(int count, char * name, char * site, int num, double price);
	warelist* AddProduct(int count, char * name, char * site, int num, double price);//返回新建节点
	warelist* DelProduct();//去头，指向下一个； 去中间，指向前一个； 去尾，指向前一个；
	warelist* Pnext();
	warelist* Plast();
};

