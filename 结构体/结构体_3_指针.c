//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct student1
//{
//	int id;
//	char name[64];
//	float score;
//};
//
//void test01()
//{
//	struct student1 s1 = { 1,"Tom",66.6};
//
//	struct student1* p = &s1;
//
//	//ทรฮส
//	printf("id = %d name = %s score = %.1f\n", s1.id, s1.name, s1.score);
//	printf("id = %d name = %s score = %.1f\n", p->id, p->name, p->score);
//
//	printf("id = %d name = %s score = %.1f\n", (&s1)->id, (&s1)->name, (&s1)->score);
//	printf("id = %d name = %s score = %.1f\n", (*p).id, (*p).name, (*p).score);
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}