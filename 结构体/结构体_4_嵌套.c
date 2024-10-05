//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
////学生结构体定义
//struct student
//{
//	char name[64];	//名字
//	int age;	//年龄
//	int score;	//分数
//};
//
////老师结构体定义
//struct teacher
//{
//	int id;	//职工编号
//	char name[64];
//	int age;
//	struct student stu;	//老师辅导的学生 子结构体
//};
//
//void test01()
//{
//	struct teacher t1;
//	t1.id = 10000;
//	strcpy(t1.name, "老王");
//	t1.age = 40;
//
//	strcpy(t1.stu.name, "张三");
//	t1.stu.age = 18;
//	t1.stu.score = 100;
//
//	printf("教师的职工编号:%d 姓名:%s  年龄:%d \n", t1.id, t1.name, t1.age);
//	printf("辅导的学员姓名:%s  年龄:%d 分数:%d \n", t1.stu.name, t1.stu.age, t1.stu.score);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}