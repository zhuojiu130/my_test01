//#include <stdio.h>
//
////利用指针操作数组中的元素
//void test01()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	//定义一个指针变量，指向数组首地址
//	int* p = arr;
//	//printf("%d\n", *p);
//	//p++;
//	//printf("%d\n", *p);
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	//printf("%d\n", *(p + i));
//	//	//printf("%d\n", p[i]);
//	//	//printf("%d\n", arr[i]);
//	//}
//	//arr和p有区别
//	printf("sizeof arr = %d\n", sizeof(arr));	//统计一个数组的大小
//	printf("sizeof p = %d\n", sizeof(p));	//统计一个指针的大小
//
//	//用[]访问数组中的元素，[]里面可以是负数么？	//可以
//	int* p2 = &arr[2];
//	printf("%d\n", p2[1]);	//本质是 *(p2 + 1)
//	printf("%d\n", p2[-1]);
//
//
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}