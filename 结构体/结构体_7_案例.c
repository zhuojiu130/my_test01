//#define _crt_secure_no_warnings
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
////����Ӣ�۵Ľṹ��
//struct hero
//{
//	char name[64];	//����
//	int age;	//����
//	char sex[32];	//�Ա�
//};
//
////ð������
//void bubblesort(struct hero arr[], int len)
//{
//	for (int i = 0; i < len - 1; i++)	//���������������ÿ�ֽ���ǰδ���򲿷ֵ����ֵ��ð�ݡ�������ĩ�ˡ�
//	{
//		for (int j = 0; j < len - i - 1; j++)	//��ÿһ���У��Ƚ����ڵ�����Ԫ�أ����ǰһ��Ԫ�ص�������ں�һ��Ԫ�ص����䣬�ͽ������ǵ�λ�á�
//		{
//			//���ǰ�����������ں��棬����
//			if (arr[j].age > arr[j + 1].age)
//			{
//				struct hero temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//void printhero(struct hero arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("Ӣ��Ӣ��:%s ����:%d �Ա�:%s\n", arr[i].name, arr[i].age, arr[i].sex);
//	}
//}
//int main()
//{	
//	//1.�����ṹ������ �������Ӣ��
//	struct hero arr[5] = {
//		{"����",23,"��"},
//		{"����",22,"��"},
//		{"�ŷ�",20,"��"},
//		{"����",21,"��"},
//		{"����",19,"Ů"}
//	};
//
//	//2.����ð������ ������������
//	int len = sizeof(arr) / sizeof(struct hero);
//	bubblesort(arr, len);
//
//	//3.��ӡ�����Ϣ
//	printhero(arr, len);
//
//	system("pause");
//	return 0;
//}