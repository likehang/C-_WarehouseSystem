#pragma once
class Product
{
private :
	int product_ID;
	char product_name[20];
	char product_site[20];
	int product_num;
	double product_price;
	double product_price_all;
public:
	Product();
	Product(int count, char * name, char * site, int num, double price);
	virtual ~Product();
	bool ChangeProduct(int count, char*name, char*site, int num, double price);//����ȫ���ã��������
	bool SetProduct_name(char *name);//��������
	bool SetProduct_site(char *name);
	bool SetProduct_num(int number);
	bool SetProduct_price(double price);
	bool SetProduct_price_all();
	bool ShowProduct();//��ӡ
	int GetProduct_ID();//�����ǻ�ȡ����
	char* GetProduct_name();
	char* GetProduct_site();
	int GetProduct_num();
	double GetProduct_price();
	double GetProduct_price_all();
};

