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
	void GetProduct();//��ӡProduct
	bool SetProduct(int count, char * name, char * site, int num, double price);
	warelist* AddProduct(int count, char * name, char * site, int num, double price);//�����½��ڵ�
	warelist* DelProduct();//ȥͷ��ָ����һ���� ȥ�м䣬ָ��ǰһ���� ȥβ��ָ��ǰһ����
	warelist* Pnext();
	warelist* Plast();
};

