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
////ֵ����
//void printStudent(struct student s)
//{
//	s.age = 28;
//	printf("print1����:%s ����:%d ����:%d\n", s.name, s.age, s.score);
//}
//
////��ַ����
//void printStudent2(struct student* p)
//{
//	p->age = 29;
//	printf("print2��:����:%s ����:%d ����:%d\n", p->name, p->age, p->score);
//}
//
//void test01()
//{
//	struct student s1 = { "����",18,99 };
//	printStudent(s1);
//	printf("test01��:����:%s ����:%d ����:%d\n", s1.name, s1.age, s1.score);
//
//	printStudent2(&s1);
//	printf("test01��:����:%s ����:%d ����:%d\n", s1.name, s1.age, s1.score);
//}
//
//
//
//int main()
//{
//	test01();
//	return 0;
//}