#include <stdio.h>

//1.ֵ����
void mySwap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	printf("mySwap��a = %d\n", a);
	printf("mySwap��b = %d\n", b);
}

void test01()
{
	int a = 10;
	int b = 20;

	mySwap(a, b);
	printf("test01��a = %d\n", a);
	printf("test01��b = %d\n", b);
}

//2.��ַ����
void mySwap2(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}

void test02()
{
	int a = 10;
	int b = 20;
	//��ַ���ݵ��β� ��������ʵ��
	mySwap2(&a, &b);

	printf("test02��a = %d\n", a);
	printf("test02��b = %d\n", b);
}

int main()
{
	test02();
	return 0;
}