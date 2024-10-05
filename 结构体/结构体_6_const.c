//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct student
//{
//	char name[64]; //姓名
//	int age;	//年龄
//	int score; //分数
//};
//
////值传递		const限定只读
//void printStudent(const struct student* p)	//指针只占4个字节（32位系统）
//{
//	//p->score = 59;
//	printf("姓名:%s 年龄:%d 分数:%d\n", p->name, p->age, p->score);
//}
//
//void test01()
//{
//	struct student stu = { "张三",18,100 };
//
//	printStudent(&stu);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}