//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
////结构体数组
//struct hero
//{
//	int id;	//id号	//4字节
//	char name[64];	//姓名	//64字节
//	int height;	//身高	//4字节
//	int age;	//年龄	//4字节
//};
//
////创建结构体数组
//void test01()
//{
//	struct hero arr[5] = {
//		{1,"刘备",155,30},
//		{2,"关羽",185,31},
//		{3,"张飞",180,32},
//		{4,"赵云",170,33},
//		{5,"吕布",177,21}	//最后一个《,》号可以省略
//	};
//
//	int num = sizeof(arr) / sizeof(struct hero);
//
//	for (int i = 0; i < num; i++)
//	{
//		printf("id = %d name = %s height = %d age = %d\n", arr[i].id, arr[i].name, arr[i].height, arr[i].age);	
//	}
//
//	//获取年龄平均值
//	int sum = 0;
//	for (int i = 0; i < num; i++)
//	{
//		sum += arr[i].age;
//	}
//	printf("平均年龄为:%d\n", sum / num);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}