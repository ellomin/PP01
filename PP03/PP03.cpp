#include <iostream>
using namespace std;

class A
{
public:
	virtual void dynamic_print()
	{
		cout << "다이나미크 \n";
	}

	void static_print()
	{
		cout << "하하\n";
	}
};

class B : public A
{
public:
	void dynamic_print()
	{
		cout << "다이나미크 \n";
	}
	void static_print()
	{
		cout << "하하\n";
	}

	void static_print(int a)
	{
		cout << a << "호호\n";
	}
};



void main()
{
	A* tempA;
	B* tempB = new B();
	tempA = tempB;
	tempA->static_print();
	tempB->static_print();

	tempA->dynamic_print();
	tempB->dynamic_print();
}