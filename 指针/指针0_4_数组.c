//#include <stdio.h>
//
////����ָ����������е�Ԫ��
//void test01()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	//����һ��ָ�������ָ�������׵�ַ
//	int* p = arr;
//	//printf("%d\n", *p);
//	//p++;
//	//printf("%d\n", *p);
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	//printf("%d\n", *(p + i));
//	//	//printf("%d\n", p[i]);
//	//	//printf("%d\n", arr[i]);
//	//}
//	//arr��p������
//	printf("sizeof arr = %d\n", sizeof(arr));	//ͳ��һ������Ĵ�С
//	printf("sizeof p = %d\n", sizeof(p));	//ͳ��һ��ָ��Ĵ�С
//
//	//��[]���������е�Ԫ�أ�[]��������Ǹ���ô��	//����
//	int* p2 = &arr[2];
//	printf("%d\n", p2[1]);	//������ *(p2 + 1)
//	printf("%d\n", p2[-1]);
//
//
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}