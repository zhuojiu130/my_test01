#include <stdio.h>

void test01()
{
	int arr[2][3] = 
	{ 
		{1,2,3},
		{4,5,6} 
	};

	//���Բ�����������ռ���ڴ�ռ��С
	printf("��ά����ռ�õĿռ�Ϊ:%d\n", sizeof(arr) );
	printf("��ά����ÿ��Ԫ��ռ�õĿռ�Ϊ:%d\n", sizeof(arr[0]));
	printf("��ά����ÿ��Ԫ��ռ�õĿռ�Ϊ:%d\n", sizeof(arr[0][0]));

	//��ά���������
	printf("��ά���������:%d\n", sizeof(arr) / sizeof(arr[0]));
	printf("��ά���������:%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));

}
int main()
{
	test01();
	return 0;
}