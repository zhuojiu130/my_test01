//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////如果函数的定义在函数的使用的上方，属于自动声明
////如果函数的定义在函数的使用下方，需要提前声明
//
////函数的声明，告诉编译器，后面有这个getMax的定义，如果下面先使用，不要报错/警告
//int getMax(int num1, int num2);	//提前声明
//int getMax(int num1, int num2);
//int getMax(int num1, int num2);
////声明可以多次
//
////定义一个函数，获取两个数字中较大的值	定义只能有一个
//int getMax(int num1, int num2)
//{
//	return num1 > num2 ? num1 : num2;	//三目运算符
//	// ? - 如果条件num1 > num2为true，就返回num1
//	// : - 如果条件num1 > num2为false，就返回num2
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	int ret = getMax(a, b);
//	printf("较大的值为: %d\n", ret);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}