//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
////ѧ���ṹ�嶨��
//struct student
//{
//	char name[64];	//����
//	int age;	//����
//	int score;	//����
//};
//
////��ʦ�ṹ�嶨��
//struct teacher
//{
//	int id;	//ְ�����
//	char name[64];
//	int age;
//	struct student stu;	//��ʦ������ѧ�� �ӽṹ��
//};
//
//void test01()
//{
//	struct teacher t1;
//	t1.id = 10000;
//	strcpy(t1.name, "����");
//	t1.age = 40;
//
//	strcpy(t1.stu.name, "����");
//	t1.stu.age = 18;
//	t1.stu.score = 100;
//
//	printf("��ʦ��ְ�����:%d ����:%s  ����:%d \n", t1.id, t1.name, t1.age);
//	printf("������ѧԱ����:%s  ����:%d ����:%d \n", t1.stu.name, t1.stu.age, t1.stu.score);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}