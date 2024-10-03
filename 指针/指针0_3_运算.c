//#include <stdio.h>
//#include <string.h>
//
////关系运算
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
////	//指针和指针相减的前提
////	//两个指针指向同一块空间
////	printf("%d\n", &arr[9] - &arr[0]);	//指针 - 指针得到两个指针之间的元素
////	return 0;
////}
//
////计数器
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
////递归
//
////指针 - 指针
//int my_strlen(char* str)
//{
//    char* start = str;  // 保存字符串的起始地址
//    while (*str != '\0')    // 遍历字符串，直到遇到结束符 '\0'
//    {
//        str++;  // 指针向下移动，指向下一个字符
//    }
//    return str - start; // 返回当前指针与起始指针的距离，即字符串长度
//}
//
//int main()
//{
//   // strlen(); -求字符串长度
//    //递归
//    int len = my_strlen("abc");
//    printf("%d", len);
//
//    return 0;
//}

