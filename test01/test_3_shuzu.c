//#include <stdio.h>
//
//void test01()
//{
//	int arr[2][3] = 
//	{ 
//		{1,2,3},
//		{4,5,6} 
//	};
//
//	//���Բ�����������ռ���ڴ�ռ��С
//	printf("��ά����ռ�õĿռ�Ϊ:%d\n", sizeof(arr) );
//	printf("��ά����ÿ��Ԫ��ռ�õĿռ�Ϊ:%d\n", sizeof(arr[0]));
//	printf("��ά����ÿ��Ԫ��ռ�õĿռ�Ϊ:%d\n", sizeof(arr[0][0]));
//
//	//��ά���������
//	printf("��ά���������:%d\n", sizeof(arr) / sizeof(arr[0]));
//	printf("��ά���������:%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
//
//	//���Բ鿴��ά������׵�ַ
//	printf("��ά������׵�ַ:%d\n", arr);
//	printf("��ά����ĵ�һ�е�ַ:%d\n", arr[0]);
//	printf("��ά����ĵڶ��е�ַ:%d\n", arr[1]);
//	printf("��ά����ĵ�һԪ�صĵ�ַ:%d\n", &arr[0][0]);
//	printf("��ά����ĵڶ�Ԫ�صĵ�ַ:%d\n", &arr[0][1]);
//
//}
//
////��ά����İ��� ���ܺͳɼ�
//void test02()
//{
//	int scores[3][3] =
//	{
//		{100, 100, 100},//��һ���˳ɼ�
//		{90, 50, 80},	//�ڶ����˳ɼ�
//		{60, 70, 80}	//�������˳ɼ�
//	};
//
//	int row = sizeof(scores) / sizeof(scores[0]);	//��ȡ��
//	int col = sizeof(scores[0]) / sizeof(scores[0][0]);	//��ȡ��
//
//	for (int i = 0; i < row; i++)
//	{
//		int sum = 0;
//		int pjun = 0;
//		for (int j = 0; j < col; j++)
//		{
//			sum += scores[i][j];//�����ܷ�
//		}
//		double avg = (double)sum / col; // ����ƽ����	//(double)sumΪǿ������ת��	//%.2f��ռλ������ʾ���һ������������������λС����
//		printf("��%d��ͬѧ�ܳɼ�Ϊ:%d, ƽ����Ϊ:%.2f\n", i + 1, sum, avg);
//	}
//}
//int main()
//{
//	test02();
//	return 0;
//}