//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
////学生结构体定义
//struct student
//{
//	char name[64];	//姓名
//	int age;	//年龄
//	int score;	//分数
//};
//
////值传递
//void printStudent(struct student s)
//{
//	s.age = 28;
//	printf("print1姓名:%s 年龄:%d 分数:%d\n", s.name, s.age, s.score);
//}
//
////地址传递
//void printStudent2(struct student* p)
//{
//	p->age = 29;
//	printf("print2中:姓名:%s 年龄:%d 分数:%d\n", p->name, p->age, p->score);
//}
//
//void test01()
//{
//	struct student s1 = { "张三",18,99 };
//	printStudent(s1);
//	printf("test01中:姓名:%s 年龄:%d 分数:%d\n", s1.name, s1.age, s1.score);
//
//	printStudent2(&s1);
//	printf("test01中:姓名:%s 年龄:%d 分数:%d\n", s1.name, s1.age, s1.score);
//}
//
//
//
//int main()
//{
//	test01();
//	return 0;
//}