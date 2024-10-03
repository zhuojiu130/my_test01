#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//1.const 修饰指针  称为 常量指针
void test01()
{
	int a = 10;
	const int* p = &a;

	//*p = 20;	error指针指向的值不可以修改
	printf("%d\n", &a);

	int b = 20;
	p = &b;	//指针的指向可以修改
	printf("%d\n", &b);
}

//2.const修饰常量	称为指针常量
void test02()
{
	int a = 10;
	int* const p = &a;

	*p = 20;	//指针指向的值 可以修改

	int b = 20;
	//p = &b;	//error指针的指向不可以修改
}

//3.const修饰指针和常量
void test03()
{
	int a = 10;
	const int* const p = 10;

	//*p = 20;	//error指针指向的值 不可以修改

	//int b = 20;
	//p = &b;	//error指针的指向不可以修改
}
int main()
{
	test01();
	system("pause");
	return 0;
}