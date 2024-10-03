#include <stdio.h>

//1.值传递
void mySwap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	printf("mySwap中a = %d\n", a);
	printf("mySwap中b = %d\n", b);
}

void test01()
{
	int a = 10;
	int b = 20;

	mySwap(a, b);
	printf("test01中a = %d\n", a);
	printf("test01中b = %d\n", b);
}

//2.地址传递
void mySwap2(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}

void test02()
{
	int a = 10;
	int b = 20;
	//地址传递的形参 可以修饰实参
	mySwap2(&a, &b);

	printf("test02中a = %d\n", a);
	printf("test02中b = %d\n", b);
}

int main()
{
	test02();
	return 0;
}