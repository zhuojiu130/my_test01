//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>	//����ͷ�ļ�
//
////�ַ�����Ķ��巽ʽ
//void test01()
//{
//	char ch[5];	//����һ���ַ����飬һ�����Ԫ�أ�ÿ��Ԫ�صĶ���char����
//	printf("%d\n", sizeof(ch));
//}
//
//void test02()
//{
//	//�����ʼ���ַ�����
//	//char arr[5] = { 'h','e','l','l','o' };	//error,��Ϊû��/0��λ�ã��������
//	//char arr[6] = { 'h','e','l','l','o' };
//	
//	////�����ַ�����
//	//for (int i = 0; i < sizeof(arr) / sizeof(char); i++)
//	//{
//	//	printf("%c", arr[i]);
//	//}
//	//printf("\n");
//
//	//����˫���ų�ʼ���ַ�����
//	char arr[6] = "hello";	//�Զ����ַ��������\0
//
//	printf("%s\n", arr);
//}
//
////�ַ�����ͳ��
//void test03()
//{
//	char arr1[32] = "hello world";  
//	printf("%d\n", strlen(arr1));	//strlenͳ���ַ���������ͳ��\0
//	printf("%d\n", sizeof(arr1));	//sizeofͳ����������ռ���ڴ��С
//
//	char arr2[] = "hello world";
//	printf("%d\n", strlen(arr2));	//strlenͳ���ַ���������ͳ��\0	//��Ч�ַ�11��
//	printf("%d\n", sizeof(arr2));	//ռ�ô�СΪ12
//
//	char arr3[] = "hello\0world";
//	printf("%d\n", strlen(arr3));	//5	//ͳ�Ƶ�\0����
//	printf("%d\n", sizeof(arr3));	//12
//}
//
////�ַ����������
//void test04()
//{
//	//�����ַ����� ���ҳ�ʼ��Ϊ��
//	char arr1[16] = "";
//		//char arr1[16] = { 0 };
//	printf("������һ������:");
//	scanf("%s", arr1);	//�����ո� ��������
//
//	printf("%s\n", arr1);
//
//	//arr1 = "hello world"; error������ֱ�ӵȺŸ�ֵ
//	strcpy(arr1,"hello world");	//strcpy ��ͷ�ļ� strubg.h
//
//	printf("%s\n", arr1);
//}
////gets ����	���Ƽ�
//void test05()
//{
//	char arr[16] = { 0 };
//	gets(arr);	//�������з��Ž�������������ո�
//
//	//�����������Ƿ������һ�������������ֹ
//
//	printf("%s\n", arr);
//}
//
////fgets �Ƽ�
//void test06()
//{
//	char arr[16] = "";
//	printf("�������ַ�:>");
//
//	//��һ�������ַ���ڶ��������С���������������豸
//	fgets(arr,sizeof(arr),stdin);	//stdin - ��׼����(standard input) Ĭ�������豸��Ĭ�ϴ������	
//	printf("%s\n", arr);
//
//}
//
////�ַ������ puts fputs
//void test07()
//{
//	char arr[16] = "hello world";
//
//	printf("%s\n", arr);
//
//	puts(arr);//�Դ�����
//	fputs(arr, stdout);	// stdout - standard output(��׼���),�����׼����豸 Ĭ����Ļ ��������
//	printf("\n");
//}
//int main()
//{
//	test07();
//
//	system("pause");
//	return 0;
//}