//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
////结构体定义
////语法： struct 结构体名称 {结构体成员列表};
//
//struct student2
//{
//	int id;	//学号
//	char name[64];	//姓名
//	float score;	//分数
//	int age;	//年龄
//};	//必须要有一个分号
//
//
////结构体使用
//void test01()
//{
//	//1.struct 结构体名 变量名
//	//struct student s1;
//
//	//2.struct 结构体名 变量名 = {成员1值，成员2值...}
//	struct student2 s2 = { 1,"Tom",99.9,18 };
//	printf("id = %d\n", s2.id);
//	printf("name = %s\n", s2.name);
//	printf("score = %.1f\n", s2.score);
//	printf("age = %d\n", s2.age);
//
//	//通过.符号，可以访问结构体成员
//}
//
////3.定义结构体时顺便创建变量
//struct student3
//{
//	int id;	//学号
//	char name[64];	//姓名
//	float score;	//分数
//	int age;	//年龄
//}s;	//***
//
//void test02()
//{
//	s.id = 2;
//	strcpy(s.name, "Jerry");//字符串赋值
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