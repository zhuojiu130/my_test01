//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
////�ṹ�嶨��
////�﷨�� struct �ṹ������ {�ṹ���Ա�б�};
//
//struct student2
//{
//	int id;	//ѧ��
//	char name[64];	//����
//	float score;	//����
//	int age;	//����
//};	//����Ҫ��һ���ֺ�
//
//
////�ṹ��ʹ��
//void test01()
//{
//	//1.struct �ṹ���� ������
//	//struct student s1;
//
//	//2.struct �ṹ���� ������ = {��Ա1ֵ����Ա2ֵ...}
//	struct student2 s2 = { 1,"Tom",99.9,18 };
//	printf("id = %d\n", s2.id);
//	printf("name = %s\n", s2.name);
//	printf("score = %.1f\n", s2.score);
//	printf("age = %d\n", s2.age);
//
//	//ͨ��.���ţ����Է��ʽṹ���Ա
//}
//
////3.����ṹ��ʱ˳�㴴������
//struct student3
//{
//	int id;	//ѧ��
//	char name[64];	//����
//	float score;	//����
//	int age;	//����
//}s;	//***
//
//void test02()
//{
//	s.id = 2;
//	strcpy(s.name, "Jerry");//�ַ�����ֵ
//	s.score = 50.5;
//	s.age = 18;
//
//	printf("id = %d\n", s.id);
//	printf("name = %s\n", s.name);
//	printf("score = %.1f\n", s.score);
//	printf("age = %d\n", s.age);
//
//}
//
//int main()
//{
//
//	test02();
//	system("pause");
//	return 0;
//}