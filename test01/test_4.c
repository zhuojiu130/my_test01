#include <stdio.h>
#include <windows.h>	// 调用 Sleep() 函数

// 显示菜单函数
void menu()
{
	printf("===== 学生成绩管理系统 =====\n");
	printf("1. 学生成绩录入\n");
	printf("2. 学生成绩修改\n");
	printf("3. 学生成绩删除\n");
	printf("4. 学生成绩查询\n");
	printf("5. 学生成绩打印\n");
	printf("0. 退出系统\n");
	printf("===========================\n");
}

// 处理用户选择的函数
void test02()
{
	int choose = -1; // 初始化选择为 -1，确保进入循环

	while (choose != 0)
	{
		menu(); // 显示菜单

		printf("请输入你的选择 (0-5):> ");
		scanf("%d", &choose);

		switch (choose)
		{
		case 1:
			printf("正在使用：学生成绩录入\n");
			break;
		case 2:
			printf("正在使用：学生成绩修改\n");
			break;
		case 3:
			printf("正在使用：学生成绩删除\n");
			break;
		case 4:
			printf("正在使用：学生成绩查询\n");
			break;
		case 5:
			printf("正在使用：学生成绩打印\n");
			break;
		case 0:
			printf("谢谢使用，再见！\n");
			break;
		default:
			printf("对不起，没有这个菜单项！请重新输入。\n");
			break;
		}

		Sleep(1000); // 稍作暂停

		system("cls"); // 清屏，重新显示菜单
	}
}

int main()
{
	test02(); // 调用处理函数
	return 0;
}
