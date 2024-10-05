//#define _crt_secure_no_warnings
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
////定义英雄的结构体
//struct hero
//{
//	char name[64];	//姓名
//	int age;	//年龄
//	char sex[32];	//性别
//};
//
////冒泡排序
//void bubblesort(struct hero arr[], int len)
//{
//	for (int i = 0; i < len - 1; i++)	//控制排序的轮数，每轮将当前未排序部分的最大值“冒泡”到数组末端。
//	{
//		for (int j = 0; j < len - i - 1; j++)	//在每一轮中，比较相邻的两个元素，如果前一个元素的年龄大于后一个元素的年龄，就交换它们的位置。
//		{
//			//如果前面的人年龄大于后面，互换
//			if (arr[j].age > arr[j + 1].age)
//			{
//				struct hero temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//void printhero(struct hero arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("英雄英雄:%s 年龄:%d 性别:%s\n", arr[i].name, arr[i].age, arr[i].sex);
//	}
//}
//int main()
//{	
//	//1.创建结构体数组 存放五名英雄
//	struct hero arr[5] = {
//		{"刘备",23,"男"},
//		{"关羽",22,"男"},
//		{"张飞",20,"男"},
//		{"赵云",21,"男"},
//		{"貂蝉",19,"女"}
//	};
//
//	//2.利用冒泡排序 将年龄做升序
//	int len = sizeof(arr) / sizeof(struct hero);
//	bubblesort(arr, len);
//
//	//3.打印输出信息
//	printhero(arr, len);
//
//	system("pause");
//	return 0;
//}