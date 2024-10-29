#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 
  // &为取指针 取地址
  // *为解指针
 
//指针的使用
void test01()	//思路 - 1.定义int a = 10; 2.定义一个指针*p	3.建立指针与变量的联系 4.*p链接到a，改变*p等于改变a
{
	int a = 10;

	//定义一个指针
	int* p;

	//建立指针和变量的关联
	p = &a;

	printf("&a = %d\n", &a);
	printf("p = %d\n", p);

	//指针的操作
	*p = 100;

	printf("a = %d\n", a);
	printf("*p = %d\n", *p);
}



int main()
{
	test01();

	system("pause");
	return 0;
}