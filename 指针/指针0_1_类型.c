//#include <stdio.h>
////
//////int main()
//////{
//////	int a = 10;	//aռ�ĸ��ֽ� - 
//////	//ָ����Ǳ�����������ŵ�ַ�ı��� - �����ָ���е�ֵ����������ַ����
//////	int* pa = &a;//�õ�����a���ĸ��ֽ��У���һ���ֽڵĵ�ַ
//////	*pa = 20;
//////
//////
//////	return 0;
//////}
////
//////int main()
//////{
//////	int* pa;
//////	char* pc;
//////	float* pf;
//////	printf("%d\n", sizeof(pa));
//////	printf("%d\n", sizeof(pc));
//////	printf("%d\n", sizeof(pf));
//////	return 0;
//////}
////
//////ָ�����͵�����
//////1.ָ�����;����ˣ�ָ������õ�Ȩ���ж��	int 4���ֽ� char 1���ֽ� double 8���ֽ�
//////2.ָ�����;����ˣ�ָ����һ���߶�Զ��������
//////
////int main()
////{
////	int arr[10] = { 0 };
////	int* p = arr;
////	char* pc = arr;
////	double* nb = arr;
////	printf("%p\n", p);
////	printf("%p\n", p + 1);
////
////	printf("%p\n", pc);
////	printf("%p\n", pc + 1);
////
////	printf("%p\n", nb);
////	printf("%p\n", nb + 1);
////	//int a = 0x11223344;
////	//char* pc = &a;
////	//*pc = 0;
////
////	//int* pa = &a;
////	//*pa = 0;
////
////	return 0;
////}
//
//int main()
//{
//	int arr[10] = { 0 };
//	double* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}