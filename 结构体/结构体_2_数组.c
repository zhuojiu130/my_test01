//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
////�ṹ������
//struct hero
//{
//	int id;	//id��	//4�ֽ�
//	char name[64];	//����	//64�ֽ�
//	int height;	//���	//4�ֽ�
//	int age;	//����	//4�ֽ�
//};
//
////�����ṹ������
//void test01()
//{
//	struct hero arr[5] = {
//		{1,"����",155,30},
//		{2,"����",185,31},
//		{3,"�ŷ�",180,32},
//		{4,"����",170,33},
//		{5,"����",177,21}	//���һ����,���ſ���ʡ��
//	};
//
//	int num = sizeof(arr) / sizeof(struct hero);
//
//	for (int i = 0; i < num; i++)
//	{
//		printf("id = %d name = %s height = %d age = %d\n", arr[i].id, arr[i].name, arr[i].height, arr[i].age);	
//	}
//
//	//��ȡ����ƽ��ֵ
//	int sum = 0;
//	for (int i = 0; i < num; i++)
//	{
//		sum += arr[i].age;
//	}
//	printf("ƽ������Ϊ:%d\n", sum / num);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}