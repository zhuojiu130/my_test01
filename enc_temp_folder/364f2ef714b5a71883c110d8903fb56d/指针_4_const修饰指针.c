#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//1.const ����ָ��  ��Ϊ ����ָ��
void test01()
{
	int a = 10;
	const int* p = &a;

	//*p = 20;	errorָ��ָ���ֵ�������޸�
	printf("%d\n", &a);

	int b = 20;
	p = &b;	//ָ���ָ������޸�
	printf("%d\n", &b);
}

//2.const���γ���	��Ϊָ�볣��
void test02()
{
	int a = 10;
	int* const p = &a;

	*p = 20;	//ָ��ָ���ֵ �����޸�

	int b = 20;
	//p = &b;	//errorָ���ָ�򲻿����޸�
}

//3.const����ָ��ͳ���
void test03()
{
	int a = 10;
	const int* const p = 10;

	//*p = 20;	//errorָ��ָ���ֵ �������޸�

	//int b = 20;
	//p = &b;	//errorָ���ָ�򲻿����޸�
}
int main()
{
	test01();
	system("pause");
	return 0;
}