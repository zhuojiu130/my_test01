//#define _CRT_SECURE_NO_WARINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////空指针
////void test01()
////{
////	int* p = NULL;	//本质就是0
////
////	//内存地址编号0~255之间被系统占用，不可以访问
////
////	printf("%d\n", *p);
////}
//
////野指针
////void test02()
////{
////	//利用指针变量p执行非法内存空间 0x1100
////	//int* p = 0x1100;
////
////}
//
//void test03()
//{
//	int* d;	//未初始化
//	*d = 100;
//	printf("%d\n", *d);
//}
//
//int main()
//{
//	test03();
//
//	system("pause");
//	return 0;
//}