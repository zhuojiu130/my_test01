//#include <stdio.h>
//#include <string.h>
//
////��ϵ����
////int main()
////{
////	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
////	int* p = arr;
////	int* pend = arr + 9;
////
////	while (p <= pend)
////	{
////		printf("%d\n", *p);
////		p++;
////	}
////
////	return 0;
////}
//                                                  
////int main()
////{
////	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
////	//ָ���ָ�������ǰ��
////	//����ָ��ָ��ͬһ��ռ�
////	printf("%d\n", &arr[9] - &arr[0]);	//ָ�� - ָ��õ�����ָ��֮���Ԫ��
////	return 0;
////}
//
////������
////int my_strlen(char* str)
////{
////    int  count = 0;
////    while (*str != '\0')
////    {
////        count++;
////        str++;
////    }
////    return count;
////}
//
////�ݹ�
//
////ָ�� - ָ��
//int my_strlen(char* str)
//{
//    char* start = str;  // �����ַ�������ʼ��ַ
//    while (*str != '\0')    // �����ַ�����ֱ������������ '\0'
//    {
//        str++;  // ָ�������ƶ���ָ����һ���ַ�
//    }
//    return str - start; // ���ص�ǰָ������ʼָ��ľ��룬���ַ�������
//}
//
//int main()
//{
//   // strlen(); -���ַ�������
//    //�ݹ�
//    int len = my_strlen("abc");
//    printf("%d", len);
//
//    return 0;
//}

