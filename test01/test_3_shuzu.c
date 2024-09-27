#include <stdio.h>

void test01()
{
	int arr[2][3] = 
	{ 
		{1,2,3},
		{4,5,6} 
	};

	//可以产看整个数组占用内存空间大小
	printf("二维数组占用的空间为:%d\n", sizeof(arr) );
	printf("二维数组每行元素占用的空间为:%d\n", sizeof(arr[0]));
	printf("二维数组每个元素占用的空间为:%d\n", sizeof(arr[0][0]));

	//二维数组的行数
	printf("二维数组的行数:%d\n", sizeof(arr) / sizeof(arr[0]));
	printf("二维数组的列数:%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));

}
int main()
{
	test01();
	return 0;
}