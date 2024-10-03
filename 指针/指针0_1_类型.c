//#include <stdio.h>
////
//////int main()
//////{
//////	int a = 10;	//a占四个字节 - 
//////	//指针就是变量，用来存放地址的变量 - 存放在指针中的值都被当场地址处理
//////	int* pa = &a;//拿到的是a的四个字节中，第一个字节的地址
//////	*pa = 20;
//////
//////
//////	return 0;
//////}
////
//////int main()
//////{
//////	int* pa;
//////	char* pc;
//////	float* pf;
//////	printf("%d\n", sizeof(pa));
//////	printf("%d\n", sizeof(pc));
//////	printf("%d\n", sizeof(pf));
//////	return 0;
//////}
////
//////指针类型的意义
//////1.指针类型决定了：指针解引用的权限有多大	int 4个字节 char 1个字节 double 8个字节
//////2.指针类型决定了，指针走一步走多远（步长）
//////
////int main()
////{
////	int arr[10] = { 0 };
////	int* p = arr;
////	char* pc = arr;
////	double* nb = arr;
////	printf("%p\n", p);
////	printf("%p\n", p + 1);
////
////	printf("%p\n", pc);
////	printf("%p\n", pc + 1);
////
////	printf("%p\n", nb);
////	printf("%p\n", nb + 1);
////	//int a = 0x11223344;
////	//char* pc = &a;
////	//*pc = 0;
////
////	//int* pa = &a;
////	//*pa = 0;
////
////	return 0;
////}
//
//int main()
//{
//	int arr[10] = { 0 };
//	double* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}