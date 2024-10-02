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
//	//可以产看整个数组占用内存空间大小
//	printf("二维数组占用的空间为:%d\n", sizeof(arr) );
//	printf("二维数组每行元素占用的空间为:%d\n", sizeof(arr[0]));
//	printf("二维数组每个元素占用的空间为:%d\n", sizeof(arr[0][0]));
//
//	//二维数组的行数
//	printf("二维数组的行数:%d\n", sizeof(arr) / sizeof(arr[0]));
//	printf("二维数组的列数:%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
//
//	//可以查看二维数组的首地址
//	printf("二维数组的首地址:%d\n", arr);
//	printf("二维数组的第一行地址:%d\n", arr[0]);
//	printf("二维数组的第二行地址:%d\n", arr[1]);
//	printf("二维数组的第一元素的地址:%d\n", &arr[0][0]);
//	printf("二维数组的第二元素的地址:%d\n", &arr[0][1]);
//
//}
//
////二维数组的案例 求总和成绩
//void test02()
//{
//	int scores[3][3] =
//	{
//		{100, 100, 100},//第一个人成绩
//		{90, 50, 80},	//第二个人成绩
//		{60, 70, 80}	//第三个人成绩
//	};
//
//	int row = sizeof(scores) / sizeof(scores[0]);	//获取行
//	int col = sizeof(scores[0]) / sizeof(scores[0][0]);	//获取列
//
//	for (int i = 0; i < row; i++)
//	{
//		int sum = 0;
//		int pjun = 0;
//		for (int j = 0; j < col; j++)
//		{
//			sum += scores[i][j];//计算总分
//		}
//		double avg = (double)sum / col; // 计算平均分	//(double)sum为强制类型转换	//%.2f：占位符，表示输出一个浮点数，并保留两位小数。
//		printf("第%d个同学总成绩为:%d, 平均分为:%.2f\n", i + 1, sum, avg);
//	}
//}
//int main()
//{
//	test02();
//	return 0;
//}