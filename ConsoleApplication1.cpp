// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "product.h"
#include "warelist.h"
#include "string.h"

int main()
{
	void testClassProduct();
	void testClassWarelist();
	//testClassProduct();
	testClassWarelist();
    std::cout << "Hello World!\n"; 
}

void testClassProduct() { //测试 Product类
	char name[] = "str1";
	char site[] = "str2";
	Product* p = new Product(20, name, site, 30, 4.5);
	p->ShowProduct();
	char nname[] = "str3";
	char nsite[] = "str4";
	p->SetProduct_num(20);
	p->ShowProduct();
	p->SetProduct_price(8.8);
	p->ShowProduct();
	p->SetProduct_name(nname);
	p->SetProduct_site(nsite);
	p->ShowProduct();
	p->ChangeProduct(20, name, site, 99, 9.9);
	p->ShowProduct();
}

void testClassWarelist() {
	int id = 0;
	char name[] = "物品";
	char site[] = "地址";
	warelist* head = nullptr;
	warelist* temp=new warelist(id, name, site, 1, 1.0);
	head = temp;
	warelist* p = temp;
	for (int i = 1; i < 10; i++) {
		p = p->AddProduct(id + i, name, site, 1 + i, 1.0 + i);
	}
	p = head;
	while (p->Pnext() != nullptr) {
		p->GetProduct();
		p = p->Pnext();
	}
	p = head;
	std::cout << "去头,元素为  "; p->GetProduct();
	p = p->DelProduct();
	std::cout << "执行后,元素为  "; p->GetProduct();
	int j = 0;
	while (j < 5) { p = p->Pnext(); j++; }
	std::cout << "去中间,元素为  "; p->GetProduct();
	p = p->DelProduct();
	std::cout << "执行后,元素为  "; p->GetProduct();
	while (p->Pnext() != nullptr)p = p->Pnext();
	std::cout << "去尾,元素为  "; p->GetProduct();
	p = p->DelProduct();
	std::cout << "执行后,元素为  "; p->GetProduct();
	while (p->Plast() != nullptr) {
		p->GetProduct();
		p = p->Plast();
	}
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
