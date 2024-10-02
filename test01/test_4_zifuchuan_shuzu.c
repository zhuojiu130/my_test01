//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>	//引入头文件
//
////字符数组的定义方式
//void test01()
//{
//	char ch[5];	//声明一个字符数组，一个五个元素，每个元素的都是char类型
//	printf("%d\n", sizeof(ch));
//}
//
//void test02()
//{
//	//逐个初始化字符数组
//	//char arr[5] = { 'h','e','l','l','o' };	//error,因为没有/0的位置，输出乱码
//	//char arr[6] = { 'h','e','l','l','o' };
//	
//	////遍历字符数组
//	//for (int i = 0; i < sizeof(arr) / sizeof(char); i++)
//	//{
//	//	printf("%c", arr[i]);
//	//}
//	//printf("\n");
//
//	//利用双引号初始化字符数组
//	char arr[6] = "hello";	//自动在字符串后面加\0
//
//	printf("%s\n", arr);
//}
//
////字符串的统计
//void test03()
//{
//	char arr1[32] = "hello world";  
//	printf("%d\n", strlen(arr1));	//strlen统计字符个数，不统计\0
//	printf("%d\n", sizeof(arr1));	//sizeof统计整个数组占用内存大小
//
//	char arr2[] = "hello world";
//	printf("%d\n", strlen(arr2));	//strlen统计字符个数，不统计\0	//有效字符11个
//	printf("%d\n", sizeof(arr2));	//占用大小为12
//
//	char arr3[] = "hello\0world";
//	printf("%d\n", strlen(arr3));	//5	//统计到\0结束
//	printf("%d\n", sizeof(arr3));	//12
//}
//
////字符数组的输入
//void test04()
//{
//	//创建字符数组 并且初始化为空
//	char arr1[16] = "";
//		//char arr1[16] = { 0 };
//	printf("请输入一串数组:");
//	scanf("%s", arr1);	//遇到空格 结束输入
//
//	printf("%s\n", arr1);
//
//	//arr1 = "hello world"; error不可以直接等号赋值
//	strcpy(arr1,"hello world");	//strcpy 的头文件 strubg.h
//
//	printf("%s\n", arr1);
//}
////gets 输入	不推荐
//void test05()
//{
//	char arr[16] = { 0 };
//	gets(arr);	//遇到换行符才结束，可以输入空格
//
//	//不会检测数据是否溢出，一旦溢出，程序终止
//
//	printf("%s\n", arr);
//}
//
////fgets 推荐
//void test06()
//{
//	char arr[16] = "";
//	printf("请输入字符:>");
//
//	//第一个输入地址，第二个输入大小，第三个是输入设备
//	fgets(arr,sizeof(arr),stdin);	//stdin - 标准输入(standard input) 默认输入设备，默认代表键盘	
//	printf("%s\n", arr);
//
//}
//
////字符串输出 puts fputs
//void test07()
//{
//	char arr[16] = "hello world";
//
//	printf("%s\n", arr);
//
//	puts(arr);//自带换行
//	fputs(arr, stdout);	// stdout - standard output(标准输出),代表标准输出设备 默认屏幕 不带换行
//	printf("\n");
//}
//int main()
//{
//	test07();
//
//	system("pause");
//	return 0;
//}