#include "pch.h"
#include "warelist.h"
#include "product.h"


warelist::warelist(int count, char * name, char * site, int num, double price)
{
	this->last = nullptr;
	this->pre = nullptr;
	this->product = new Product(count, name, site, num, price);
}


warelist::~warelist()
{
}

void warelist::GetProduct()
{
	this->product->ShowProduct();
}

bool warelist::SetProduct(int count, char * name, char * site, int num, double price)
{
	if (this->product->ChangeProduct(count, name, site, num, price))return true;
	else return false;
}

warelist* warelist::AddProduct(int count, char * name, char * site, int num, double price)
{
	warelist* p = this;
	warelist* NewWarelist = new warelist(count, name, site, num, price);
	if (p == nullptr) return NewWarelist;//��ͷ���
	else {
		if (p->last == nullptr) {//��β�ڵ�
			p->last = NewWarelist;
			NewWarelist->pre = p;
		}
		else {//���м�
			p->last->pre = NewWarelist;
			NewWarelist->last = p->last;
			NewWarelist->pre = p;
			p->last = NewWarelist;
		}
	}
	return NewWarelist;
}

warelist* warelist::DelProduct()
{
	warelist* p = this;//ȥͷ��ָ����һ���� ȥ�м䣬ָ��ǰһ���� ȥβ��ָ��ǰһ����
	if (p->last && p->pre) {
		p->last->pre = p->pre;
		p->pre->last = p->last;
		p = p->pre;
	}
	else if (p->last) {
		p = p->last;
		p->pre = nullptr;
	}
	else {
		p = p->pre;
		p->last = nullptr;
	}
	this->~warelist();
	return p;
}

warelist * warelist::Pnext()
{
	return this->last;
}

warelist * warelist::Plast()
{
	return this->pre;
}
